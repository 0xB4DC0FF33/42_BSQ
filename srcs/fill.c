/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrypert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 20:42:58 by yrypert           #+#    #+#             */
/*   Updated: 2015/08/27 21:56:14 by yrypert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill(char **tab, int	x, int	y, int	max, char	square )
{

	while (tab[x] != '\0' && tab[y] != '\0')
	{
		if (tab[x] == max)
		{
		printf("%d", square);
		x++;
		}
		if (tab[y] == max) 
		{
		printf("%d", square);
		y++;
		}

	}

}
