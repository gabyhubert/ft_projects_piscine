/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:26:36 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/15 13:28:17 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] >= 32 && str[i] <= 126)
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}