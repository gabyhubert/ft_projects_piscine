/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:32:52 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/10 21:25:02 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checking(char c)
{
	if (c == '\n' || c == '\v' || c == '\r')
		return (1);
	else if (c == '\t' || c == ' ' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int rang;
	int signe;
	int transformateur;

	rang = 0;
	transformateur = 0;
	signe = 1;
	while (ft_checking(str[rang]) == 1)
		rang++;
	if (str[rang] == '-')
		signe = -1;
	if (str[rang] == '-' || str[rang] == '+')
		rang++;
	while (str[rang] <= '9' && str[rang] >= '0')
	{
		transformateur = transformateur * 10 + str[rang] - 48;
		rang++;
	}
	return (transformateur * signe);
}
