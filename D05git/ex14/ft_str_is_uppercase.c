/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:18:51 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/15 13:19:22 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}