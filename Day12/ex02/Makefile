# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eiordach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/27 21:10:08 by eiordach          #+#    #+#              #
#    Updated: 2017/09/27 21:10:32 by eiordach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CLFAGS = -Wall -Wextra -Werror
SRC = main.c ft_tail.c utils.c
OBJ = main.o ft_tail.o utils.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
