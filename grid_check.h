/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_check.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aehrlich <aehrlich@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:18:44 by aehrlich          #+#    #+#             */
/*   Updated: 2022/02/14 00:27:28 by aehrlich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_CHECK_H
#define GRID_CHECK_H

int	ft_check_duplicates(int	*row);

int	ft_check_sequence(int *row);

int	ft_check_col(int *grid, int col);

int	ft_check_row(int *grid, int row);

#endif
