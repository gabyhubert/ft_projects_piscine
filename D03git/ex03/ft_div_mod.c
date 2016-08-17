/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:34:34 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/08 20:46:53 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int result_div;
	int result_mod;

	result_div = a / b;
	result_mod = a % b;
	*div = result_div;
	*mod = result_mod;
}
