/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrypert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 20:42:58 by yrypert           #+#    #+#             */
/*   Updated: 2015/08/27 23:15:15 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill(char **tab, int	x, int	y, int	max, char	square )
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	x = x - max;
	y = y - max;


	while (i <= max)
	{
		while (j <= max)
		{
			tab[y][x] = square;
			j++;
			x++;
		}
	i++;
	y++;
	}
	io_print(tab);
}
