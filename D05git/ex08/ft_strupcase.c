/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:18:53 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 13:26:58 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int cmpt;

	cmpt = 0;
	while (str[cmpt] != '\0')
	{
		if (str[cmpt] > 'a' && str[cmpt] < 'z')
		{
			str[cmpt] = str[cmpt] - 32;
		}
		else
			cmpt++;
		cmpt++;
	}
	return (str);
}
