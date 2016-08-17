/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:12:29 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/16 18:03:54 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int cmpt;
	char *dest;

	cmpt = 0;
	while (src[cmpt])
		cmpt++;
	dest = (char *)malloc(sizeof(char) * (cmpt + 1));
	cmpt = 0;
	while (src[cmpt])
	{
		dest[cmpt] = src[cmpt];
		cmpt++;
	}
	if (src[cmpt] == '\0')
		dest[cmpt] = src[cmpt];
	return (dest);
}
