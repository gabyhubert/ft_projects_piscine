/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:30:37 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/17 02:28:34 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int range_2;
	int *str;

	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(int) * (max - min));
	range_2 = 0;
	while (min < max)
	{
		str[range_2] = min;
		min++;
		range_2++;
	}
	*range = str;
	return(range_2);
}
