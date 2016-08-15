/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:19:10 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/15 17:27:28 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		ft_putchar(str[r]);
		r++;
	}
}

void	ft_rev_params(int argc, char **argv)
{
	int cmpt;

	cmpt = argc - 1;
	while (cmpt > 0)
	{
		ft_putstr(argv[cmpt]);
		ft_putchar('\n');
		cmpt--;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
