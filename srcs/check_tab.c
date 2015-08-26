/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrypert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 17:12:37 by yrypert           #+#    #+#             */
/*   Updated: 2015/08/27 00:33:19 by yrypert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int CT_tablen(char **str)
{
	int c;

	c = 0;
	while (str[1][c] != '\0')
	{
		str++;
		c++;
	}
	return (c);
}

char **ct_strtotab(char	*str)
{
	char	**tab;
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	i = 0;

	while(str[i] != '\0')
	{
		tab[x][y] = str[i];
		y++;
		i++;
		if (tab[x][y] =='\n')
		{
			tab[x][y] = '\0';
			y++;
			x = 0;
		}
	}
	return (0);
}
