/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:51:34 by pribault          #+#    #+#             */
/*   Updated: 2016/08/14 13:54:04 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		display_sudoku(char **sudoku)
{
	int		i;
	int		j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &sudoku[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (1);
}