# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2021/11/19 12:58:16 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = ./
AR = ar
ARFLAGS = -rcs
LIBR = ranlib
SRCDIR = .
OBJDIR = .
SRCS = $(wildcard $(SRCDIR)/*.c)
_OBJS = $(patsubst $(SRCDIR)/%.c, %.o, $(SRCS))
OBJS = $(addprefix $(OBJDIR)/, $(_OBJS))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	$(LIBR) $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
