/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:25:06 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 00:09:10 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char  *file;
	int i;

	i = 1;
	if (argc == 1)
	{
		file = "stdinput";
		io_open(file);
	}
	else if (argc == 2)
	{
		file = *argv[1];
		io_open(file);
	}
	else if (argc > 2)
	{
		while (i <= argc)
		{
			file = *argv[i];
			io_open(file);
			i++;
		}
	}
}
