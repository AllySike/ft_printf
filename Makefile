# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 09:31:56 by kgale             #+#    #+#              #
#    Updated: 2021/01/15 16:59:27 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h
OPTION = -c -I $(HEADER)
SRCS =		ft_char_treatment.c	\
			ft_check_category.c	\
			ft_flags_treatment.c	\
			ft_helpers.c	\
			ft_int_treatment.c	\
			ft_p_treatment.c \
			ft_printf.c	\
			ft_putchar.c	\
			ft_str_helpers.c	\
			ft_string_treatment.c \
			ft_u_treatment.c \
			ft_x_treatment.c

OBJS =		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OPTION) $(SRCS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
				rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
