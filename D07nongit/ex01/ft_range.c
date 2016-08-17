/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:04:24 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/16 22:36:51 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range;
	int *str;

	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(int) * (max - min));
	range = 0;
	while (min < max)
	{
		str[range] = min;
		min++;
		range++;
	}
	return(str);
}
