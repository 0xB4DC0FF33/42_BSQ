/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrypert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 17:12:37 by yrypert           #+#    #+#             */
/*   Updated: 2015/08/27 05:09:56 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ct_tablen(char **str)
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
	return (tab);
}

void ct_AquireCharset(char *str)
{
	char *buffer;
	char empty;
	char square;
	char block;
	int width;
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		buffer[i] = str[i];
		i++;
	}
	width = ft_atoi(buffer);
	i++;
	empty = str[i];
	i++;
	block = str[i];
	i++;
	square = str[i];
	str = ct_strclean(str)


}

char *ct_strclean(char *str)
{
	int i;
	char *newstr;

	i = 3;
	while (str[i] != '\0')
	{
		newstr[i - 3] = str[i];
		i++;
	}
	return(newstr);
}
