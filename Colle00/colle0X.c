/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:52:02 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/06 15:52:48 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		colle(int x, int y)
{
	int a;
	int b;
	b = 0;
	while( y > b)
	{
		a = 0;
		while( x > a)
		{
			if ((b == 0 && a == 0) || (b == y-1 && a == x-1))
				ft_putchar('A');
			else if ((b == 0 && a == x-1) || (b == y-1 &&  a ==0))
				ft_putchar('C');					
			else if ((b == 0 || b == y-1) && (a != 0 &&  a != x-1))
				ft_putchar('B');
			else if ((b != 0 || b != y-1) && (a == 0 || a == x-1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}

int		main()
{
	colle(15, 15);

	return (0);    
}
