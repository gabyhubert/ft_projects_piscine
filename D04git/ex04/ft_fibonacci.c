/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 17:03:32 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/10 19:06:39 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 1)
		return (index);
	if (index > 1)
		index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}
