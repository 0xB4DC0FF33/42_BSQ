/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 23:55:46 by mburte            #+#    #+#             */
/*   Updated: 2015/08/27 00:09:32 by mburte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#define BUFF_SIZE 4096

int ct_tablen(char **tab);
int io_open(char *file);
int io_read(int fd);

#endif
