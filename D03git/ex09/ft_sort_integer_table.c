/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:40:14 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/11 16:40:40 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int sup;
	int inf;
	int tampon;

	sup = 0;
	inf = 0;
	tampon = 0;
	while (inf <= size)
	{
		while (sup <= size)
		{
			if (tab[inf] > tab[sup])
			{
				tampon = tab[sup];
				tab[sup] = tab[inf];
				tampon = tab[inf];
			}
			sup++;
		}
		inf++;
		sup = (inf + 1);
	}
}
