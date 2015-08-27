/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputOutput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 16:27:01 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 10:07:47 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int io_open(char *file)
{
	int fd;

	if (file == "stdinput")
		fd = 0;
	else
		fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(errno);
		return (0);
	}
	else
	{
		IO_read(fd);
		return(fd);
	}
}

char *io_read(int fd)
{
	char buf[BUFF_SIZE + 1];
	char *str;

	if (read(fd, buf, BUFF_SIZE) == -1)
	{
		ft_putstr(errno);
		return(0);
	}
	else
	{
		str = read(fd, buf, BUFF_SIZE);
	}
	ct_acquirechars(str, 0);
	return (str);
}
