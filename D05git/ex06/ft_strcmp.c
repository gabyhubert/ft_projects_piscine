/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 10:46:38 by ghubert           #+#    #+#             */
/*   Updated: 2016/08/14 13:18:04 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int cmpt;
	int result;

	cmpt = 0;
	while (s1[cmpt] == s2[cmpt])
	{
		cmpt++;
		if (s1[cmpt] != s2[cmpt] || s1[cmpt] == '\0' || s2[cmpt] == '\0')
		{
			result = (s1[cmpt] - '0') - (s2[cmpt] - '0');
			return (result);
		}
	}
	return (0);
}
