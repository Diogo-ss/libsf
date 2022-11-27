# ************************************************************************** #
#                                                                            #
#                                               ::::::::   :::::::           #
#   ft_memset.c                                 :+:    :+:   :+:             #
#                                               +:+    +:+   +:+             #
#   By: Diogo-ss <diogo-ss@mail.com>            +#+    +:+   +#+             #
#                                               +#+    +#+   +#+             #
#   Created: 2022/11/27 19:02:14 by Diogo-ss    #+#    #+#   #+#             #
#   Updated: 2022/1/27 10:02:18 by Diogo-ss    ########   #######           #
#                                                                            #
# ************************************************************************** #

NAME 		= libsf.a
HEADER 		= libsf.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= sf_factorial.c sf_index.c

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
