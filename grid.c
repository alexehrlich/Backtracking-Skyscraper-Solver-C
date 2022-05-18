#include <unistd.h>
#include "set_prefill_values.h"
#include "grid.h"

void	ft_init_grid(int **grid, int **user_input)
{
	int	i;

	i = 0;
	while (i < 36)		//First inizialze every field with zwero
	{
		(*grid)[i] = 0;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		(*grid)[i + 1] = (*user_input)[i]; 					//write the views from the user input --> Row 0
		(*grid)[i + 31] = (*user_input)[i + 4];				//Write bottom row of views
		(*grid)[(i + 1) * 6] = (*user_input)[i + 8];		//write left colum of views
		(*grid)[(i + 1) * 6 + 5] = (*user_input)[i + 12];	//Write right column
		i++;
	}
}

void	ft_prefill_save_values(int **grid)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			ft_set_colum(row, col, grid);
			ft_set_row(row, col, grid);
			ft_set_fours(row, col, grid);
			ft_set_threes(row, col, grid);
			col++;
		}
		row++;
	}
}

void	ft_print_grid(int **grid_p)
{
	int		row;
	int		col;
	char	current_num;

	row = 0;
	col = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			current_num = (*grid_p)[6 * row + col] + 48;
			write(1, &current_num, 1);
			if (col < 5)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
    write(1, "\n", 1);
}
