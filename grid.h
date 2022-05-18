/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aehrlich <aehrlich@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:53:50 by aehrlich          #+#    #+#             */
/*   Updated: 2022/02/13 09:44:13 by aehrlich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
#define GRID_H

void	ft_print_grid(int **grid_p);

void	ft_init_grid(int **grid, int **user_input);

void	ft_prefill_save_values(int **grid);

#endif
