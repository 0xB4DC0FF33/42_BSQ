/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 23:55:46 by mburte            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/08/27 11:44:14 by mburte           ###   ########.fr       */
=======
/*   Updated: 2015/08/27 12:14:25 by mburte           ###   ########.fr       */
>>>>>>> 6213bcebbb1f98b979159c023f50a3ae428e41ab
/*                                                                            */
/* ************************************************************************** */

#ifndef		HEADER_H
#define HEADER_H

#define BUFF_SIZE 4096

int ct_tablen(char **tab);
char **ct_strtotab(char *str);
void ct_acquirechars(char *str, int i);
char *ct_strclean(char *str);

int io_open(char *file);
int io_read(int fd);

int ft_power(int nb, int pow);
int ft_atoi(char str);
int ft_putstr(char *str);

typedef struct	s_stock
{
	int max;
	int maxx;
	int maxy;
	int x;
	int y;
}				t_shrk;

#endif
