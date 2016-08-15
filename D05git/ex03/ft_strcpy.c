/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 04:51:31 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/13 15:38:27 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dest, char *src)
{
	int rang;

	rang = 0;
	while (src[rang] != '\0')
	{
		dest[rang] = src[rang];
		rang++;
	}
	dest[rang] = src[rang];
	return (*dest);
}
