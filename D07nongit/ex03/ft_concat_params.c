/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 02:02:11 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/17 02:49:55 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char *str;
	char *strtmp;
	int argm;
	int i;
	int j;

	j = 0;
	argm = 1;
	str = (char*)malloc(sizeof(char) * argc);
	while (argm < argc)
	{
		i = 0;
		strtmp = argv[argm];
		while (strtmp[i])
		{
			str[j] = strtmp[i];
			i++;
			j++;
		}
		argm++;
		if (argm < argc)
		{
			str[j] = '\n';
			j++;
		}
	}
	str[j] = '\0';
	return(str);
}
