/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputOutput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 16:27:01 by mburte            #+#    #+#             */
/*   Updated: 2015/08/25 23:55:35 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **IO_read(char *file)
{
	char buff[BUFF_SIZE + 1];
	int fd;

	fd = open(file, O_RDONLY);
	
}
