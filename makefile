# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburte <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/24 14:23:20 by mburte            #+#    #+#              #
#    Updated: 2015/08/25 12:07:38 by mburte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =

NAME = bsq

GRID = grid.txt

PERL = GridGenerator.pl

all : compile

compile : 
	gcc -o $(NAME) $(SRCS)

launch : compile
	./$(NAME)

generate : clean
	touch $(GRID)
	./$(PERL) > $(GRID)

clean :
	rm -f $(GRID)

fclean : clean
	rm -f $(NAME)

re : fclean generate compile
