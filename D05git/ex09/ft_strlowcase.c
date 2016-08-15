/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:29:45 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 13:32:33 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int cmpt;

	cmpt = 0;
	while (str[cmpt] != '\0')
	{
		if (str[cmpt] > 'A' && str[cmpt] < 'Z')
			str[cmpt] = str[cmpt] + 32;
		else
			cmpt++;
		cmpt++;
	}
	return (str);
}
