/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:37:14 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/06 19:36:09 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_spacing(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char e;
	char r;
	char t;

	e = '0';
	while (e <= '7')
	{
		r = e + 1;
		while (r <= '8')
		{
			t = r + 1;
			while (t <= '9')
			{
				ft_putchar(e);
				ft_putchar(r);
				ft_putchar(t);
				if (e != '7' || r != '8' || t != '9')
					ft_print_spacing();
				t++;
			}
			r++;
		}
		e++;
	}
}
