/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 23:55:46 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 22:44:13 by mburte           ###   ########.fr       */
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
int io_print(char *grid);

int ft_strlen(char *str);
int ft_power(int nb, int pow);
int ft_atoi(char str);
void ft_putstr(char *str);

void sf_gridprep(char *str, char block, char empty, int wid, char sqr);
void sf_core(int **grid, char block, char empty, int wid, char sqr);
int sf_count(int **grid, int x, int y);

void	fill(char **tab, int	x, int	y, int	max, char	square );

typedef struct	s_stock
{
	int max;
	int maxx;
	int maxy;
	int x;
	int y;
}				t_shrk;

#endif
