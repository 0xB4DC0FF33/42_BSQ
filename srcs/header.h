/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 23:55:46 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 11:44:14 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#define BUFF_SIZE 4096

int ct_tablen(char **tab);
char **ct_strtotab(char *str);

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
