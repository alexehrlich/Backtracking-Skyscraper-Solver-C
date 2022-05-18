/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aehrlich <aehrlich@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:32:45 by aehrlich          #+#    #+#             */
/*   Updated: 2022/02/14 00:23:29 by aehrlich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_GRID_H
#define SOLVE_GRID_H

int	ft_solve_grid(int row, int col, int **grid);

int	ft_change_value(int row, int col, int **grid);

int	ft_is_valid_candidate(int row, int col, int **grid);

#endif
