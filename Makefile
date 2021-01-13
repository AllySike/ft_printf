# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 09:31:56 by kgale             #+#    #+#              #
#    Updated: 2021/01/12 21:29:46 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
OPTION = -c -I $(HEADER)
SRCS_DIR = .
SRCS =		ft_char_treatment.c	\
			ft_check_category.c	\
			ft_flags_treatment.c	\
			ft_helpers.c	\
			ft_int_treatment.c	\
			ft_printf.c	\
			ft_putchar.c	\
			ft_str_helpers.c	\
			ft_string_treatment.c \
			ft_u_treatment.c \
			ft_x_treatment.c

OBJS =		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)
				ranlib $(NAME)

clean:
				rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
