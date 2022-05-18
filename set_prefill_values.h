/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prefill_values.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aehrlich <aehrlich@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:53:50 by aehrlich          #+#    #+#             */
/*   Updated: 2022/02/13 09:45:58 by aehrlich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_PREFILL_VALUES_H
#define SET_PREFILL_VALUES_H

void	ft_set_colum(int row, int col, int **grid);

void	ft_set_row(int row, int col, int **grid);

void	ft_set_fours(int row, int col, int **grid);

void	ft_set_threes(int row, int col, int **grid);

#endif
