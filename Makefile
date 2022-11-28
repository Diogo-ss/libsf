# **************************************************************************** #
#                                                                              #
#                                                       ::::::::   :::::::     #
#    Makefile                                           :+:    :+:   :+:       #
#                                                       +:+    +:+   +:+       #
#    By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+       #
#                                                       +#+    +#+   +#+       #
#    Created: 2022/11/28 19:04:40 by Diogo-ss           #+#    #+#   #+#       #
#    Updated: 2022/11/28 19:37:03 by Diogo-ss           ########   #######     #
#                                                                              #
# **************************************************************************** #

NAME 		= libsf.a
HEADER 		= libsf.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= sf_arrayfreq.c sf_arrayindex.c sf_arraylen.c \
			   sf_numarray.c sf_numfact.c sf_strfreq.c\
			   sf_strindex.c sf_strstrip.c

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
