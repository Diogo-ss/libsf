# **************************************************************************** #
#                                                                              #
#                                                       ::::::::   :::::::     #
#    Makefile                                           :+:    :+:   :+:       #
#                                                       +:+    +:+   +:+       #
#    By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+       #
#                                                       +#+    +#+   +#+       #
#    Created: 2022/11/28 19:04:40 by Diogo-ss           #+#    #+#   #+#       #
#    Updated: 2022/11/28 19:04:43 by Diogo-ss           ########   #######     #
#                                                                              #
# **************************************************************************** #

NAME 		= libsf.a
HEADER 		= libsf.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= sf_factorial.c sf_index.c sf_arraylen.c

OBJS 		:= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rsc $(NAME) $(OBJS)
%.o:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean: $(OBJS)
	rm -rf $(OBJS)

fclean: 
	rm -rf $(NAME) $(OBJS)

re: fclean all


.PHONY: all clean fclean
