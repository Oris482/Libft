# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2021/11/16 13:29:24 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INCS = includes/
LIBC = ar -rc
LIBR = ranlib
SRC_DIR = ./src
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))
OBJS = $(SRCS:.c=.o)

.c.o: 
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)
		$(LIBR) $(NAME)

all: $(NAME)

.PHONY: clean fclean all re .c.o

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
