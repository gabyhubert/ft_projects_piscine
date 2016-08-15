/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KompilaThorJ05.compile                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:10:30 by wescande          #+#    #+#             */
/*   Updated: 2016/08/08 12:10:32 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define color(p) printf("[%dm", p)
#define RED 31
#define GRE 32
#define BLU 36
#define WHI 37

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strstr(char *str, char *to_find);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);
int			ft_str_is_alpha(char *str);
int			ft_str_is_numeric(char *str);
int			ft_str_is_uppercase(char *str);
int			ft_str_is_lowercase(char *str);
int			ft_str_is_printable(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, int nb);
unsigned	int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size);
void		ft_putnbr_base(int nbr, char *base);
int			ft_atoi_base(char *str, char *base);
void		ft_putstr_non_printable(char *str);
void		*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	
	printf("<=================================================>\n");
	char *nom = "ft_strcmp";
	int correct = 0;
	printf("Ex 03 : %s\n", nom);
	if (!strcmp("ft_strcmp.c","ft_strcmp.c"))
	{
		color(32);
		printf("Nom = OK");
	}
	else
	{
		color(31);
		correct++;
		printf("Nom = ERREUR ! ! ! !");
	}
	color(0);
	printf("\n");
	char val_send[][15] = {"0?l;;[];=-0123", "15^4", "89\\7", "-6%54", "2147@483647", "-21474 83648", "+45632", " - 56"};
	char val_send2[][15] = {"5", "15" ,"7", "dsfsdgwgww87", "-560"};
	int ret;
	int ans;
	int i = 0;
	while (i < 8)
	{
		printf("Test #%d avec ", i);
		color(34);
		printf("%s et %s\n" , val_send[i], val_send2[i]);
		color(WHI);
		ans = strcmp(val_send[i], val_send2[i]);
		printf("%d = CORRECTION", ans);
		color(0);
		printf("\n");
		ret = ft_strcmp(val_send[i], val_send2[i]);
		if (ret != ans)
		{
			color(RED);
			correct++;
		}
		else
			color(GRE);
			printf("%d = RESULT", ret); 
		color(0);
		printf("\n");
		i++;
	}
	if (correct == 0)
	{
		color(GRE);
		printf("\n<====================SUCESS !======================>\n");
	}
	else
	{
		color(RED);
		printf("\n<====================FAIL ! ! ! !======================>\n");
	}
	color(0);
	printf("\n");



	return (0);
}
