/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 05:16:55 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/10 05:18:48 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	if (nb < 0 || nb > 12)
		result = 0;
	else if (nb == 0 || nb == 1)
		result = 1;
	else
	{
		i = 0;
		result = nb;
		while (nb > 1)
		{
			result = (result * (nb - 1));
			i = result;
			nb--;
		}
		result = i;
	}
	return (result);
}
