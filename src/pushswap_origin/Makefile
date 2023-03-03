# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 09:46:50 by rnaka             #+#    #+#              #
#    Updated: 2023/03/03 11:22:26 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS    = 	ft_strdup.c\
			arg_check.c\
			ft_split.c\
			ft_strlen.c\
			ft_substr.c\
			test.c
OBJS    = $(SRCS:.c=.o)
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<
test:$(SRCS)
	gcc -o $@ $^
clean:	
		rm -f $(OBJS)
re:		fclean all