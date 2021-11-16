# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2021/11/16 21:08:52 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
HEADER = includes/
AR = ar
ARFLAGS = -rcs
LIBR = ranlib
SRCDIR = srcs
OBJDIR = srcs
SRCS = $(wildcard $(SRCDIR)/*.c)
_OBJS = $(patsubst $(SRCDIR)/%.c, %.o, $(SRCS))
OBJS = $(addprefix $(OBJDIR)/, $(_OBJS))

.PHONY: all clean fclean re

all: $(TARGET)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	$(LIBR) $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all
