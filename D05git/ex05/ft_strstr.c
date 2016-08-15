/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 05:15:26 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/13 22:20:15 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == to_find[i])
		{
			while (str[j + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str + j);
		}
		j++;
		i = 0;
	}
	return (0);
}
