/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:14:17 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/15 16:42:42 by ghubert          ###   ########.fr       */
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

void	ft_print_params(int argc, char **argv)
{
	int cmpt;

	cmpt = 1;
	while (cmpt < argc)
	{
		ft_putstr(argv[cmpt]);
		ft_putchar('\n');
		cmpt++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
