/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:14:13 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 13:17:51 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, int n)
{
	int cmpt;
	int result;

	cmpt = 0;
	while (cmpt != n)
	{
		cmpt++;
		if (s1[cmpt] != s2[cmpt] || s1[cmpt] == '\0' || s2[cmpt] == '\0')
		{
			result = (s1[cmpt] - '0') - (s2[cmpt] - '0');
			return (result);
		}
	}
	result = (s1[n] - '0') - (s2[n] - '0');
	return (result);
}
