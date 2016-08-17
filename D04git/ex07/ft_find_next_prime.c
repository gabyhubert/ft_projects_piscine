/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:04:39 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 21:40:51 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int test_val;
	int conf;

	if (nb <= 1)
		nb = 2;
	conf = 0;
	test_val = 2;
	while (conf != 1)
	{
		while ((nb % test_val) != 0)
			test_val++;
		if (test_val == nb)
			conf++;
		if (test_val != nb)
			nb++;
	}
	return (nb);
}
