/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 05:04:19 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 15:59:46 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int rang;

	if (n <= 0)
		return (0);
	n = n - 1;
	rang = 0;
	while (rang < n)
	{
		dest[rang] = src[rang];
		rang++;
	}
	dest[n] = src[n];
	return (*dest);
}
