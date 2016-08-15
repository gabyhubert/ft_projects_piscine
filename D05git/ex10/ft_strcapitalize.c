/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:34:36 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 15:36:03 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strminimalize_all(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strminimalize_all(str);
	while (str[i] != '\0')
	{
		while (str[i] < 'a' && str[i] > 'z')
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'a' && str[i - 1] > 'z')
			{
				str[i] = str[i] - 32;
				i++;
			}
			else
				i++;
		}
	}
	return (str);
}
