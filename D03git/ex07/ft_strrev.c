/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 05:01:08 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/10 12:35:12 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		rang;
	int		counter;
	int		tampon;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	rang = 0;
	counter = counter - 1;
	while (rang <= counter)
	{
		tampon = str[rang];
		str[rang] = str[counter];
		str[counter] = tampon;
		counter--;
		rang++;
	}
	return (str);
}
