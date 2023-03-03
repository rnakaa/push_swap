# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 06:40:02 by rnaka             #+#    #+#              #
#    Updated: 2023/02/11 06:42:01 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
SRC			=	$(shell find src/ -name "*.c")
OBJ			=	$(SRC:.c=.o)
INC			=	-I include
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(INC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
