/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:25:06 by mburte            #+#    #+#             */
/*   Updated: 2015/08/25 16:21:32 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	FILE  *file;
	int i;

	i = 1;
	if (argc == 1)
	{
		file = STDIN_FILENO
		IO_read(file);
	}
	else if (argc == 2)
	{
		file = *argv[1];
		IO_read(file);
	}
	else if (argc > 2)
	{
		while (i <= argc)
		{
			file = *argv[i];
			IO_read(file);
			i++;
		}
	}
}
