/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 20:32:46 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/10 21:17:46 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int test_val;

	if (nb <= 1)
		return (0);
	test_val = 2;
	while ((nb % test_val) != 0)
		test_val++;
	if (test_val != nb)
		return (0);
	return (1);
}
