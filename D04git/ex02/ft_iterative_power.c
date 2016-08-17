/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 13:27:23 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 21:37:52 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	if (power == 0)
		return (1);
	if (power > 0)
	{
		power--;
		resultat = nb;
		while (power > 0)
		{
			resultat = (resultat * nb);
			power--;
		}
		return (resultat);
	}
	else
		return (0);
}
