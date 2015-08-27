/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_finder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 06:56:51 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 22:44:18 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sf_gridprep(char *str, char block, char empty, int wid, char sqr)
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

void sf_core(int **grid, char block, char empty, int wid, char sqr)
{
	t_shrk.y = 2;
	t_shrk.x = 2;
	t_shrk.max = 0;
	while(t_shrk.y <= wid)
	{
		while(grid[t_shrk.y][t_shrk.x] != '\0')
		{
			if (grid[t_shrk.y][t_shrk.x] != empty)
			{
				grid[t_shrk.y][t_shrk.x] = sf_count(grid, t_shrk.x, t_shrk.y);
				if (grid[t_shrk.y][t_shrk.x] > t_shrk.max)
				{
					t_shrk.max = grid[t_shrk.y][t_shrk.x];
					t_shrk.maxx = t_shrk.x;
					t_shrk.maxy = t_shrk.y;
				}
			}
			t_shrk.x++;
		}
		t_shrk.y++;
		t_shrk.x = 0;
	}
}

int sf_count(int **grid, int x, int y)
{
	int tmp;

	tmp = grid[y - 1][x];
	if (grid[y - 1][x - 1] <= tmp)
		tmp = grid[y - 1][x - 1];
	if (grid[y][x - 1] <= tmp)
		tmp = grid[y][x - 1];
	return (tmp + 1);
}
