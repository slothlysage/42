# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjones <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/21 17:18:42 by sjones            #+#    #+#              #
#    Updated: 2017/03/21 17:18:57 by sjones           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = main.c

#OBJS = $(SRCS:.c=.o)

FLGS = -Wextra -Werror -Wall

$(NAME):
	gcc &(FLGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

.phony all clean fclean re
