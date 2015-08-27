/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_finder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 06:56:51 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 08:15:09 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **sf_gridprep(char *str, char block, char empty, int wid, char sqr)
{
	char **table;
	int **grid;
	int i;
	int j;

	j = 0;
	i = 0;
	grid = ct_strtotab(str);
	while (j <= wid)
	{
		while (table[j][i] != '\0')
		{
			if (table[j][i] == empty)
				grid[j][i] = 1;
			else if (table[1][i] == block)
				grid[j][i] = 0;
			else 
				ft_putstr("grille invalide !");
			i++;
		}
	}
}

void sf_gridcount(int **grid, char block, char empty, int wid, char sqr)
{
	int tmp;
	int max;
	int maxX;
	int maxY;
	int i;
	int j;

	i = 2;
	j = 2;
	
}
