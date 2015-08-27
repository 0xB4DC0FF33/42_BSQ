/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 00:05:16 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 02:43:17 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++
	}
}

int ft_power(int nb, int pow)
{
	int i;

	i = 0;
	while(i <= pow)
	{
		nb = nb * nb;
	}
	return(nb);
}

int ft_atoi(char *str)
{
	int result;
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);
	while(str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] < = '9')
		{
			result = (str[j] - 48) * ft_power(10, i);
		}
	}
	return (result);
}
