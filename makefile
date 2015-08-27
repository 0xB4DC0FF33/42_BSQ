# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburte <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/24 14:23:20 by mburte            #+#    #+#              #
#    Updated: 2015/08/27 23:18:12 by mburte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = check_tab.c\
	   fill.c\
	   ft.c\
	   inputOutput.c\
	   main.c\
	   square_finder.c

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
	./$(PERL) 100 150 5 > $(GRID)

clean :
	rm -f $(GRID)

fclean : clean
	rm -f $(NAME)

re : fclean generate compile
