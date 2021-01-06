cmake_minimum_required(VERSION 3.17)
project(CLion C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c ft_printf.c ft_char_treatment.c ft_strjoin.c ft_flags_treatment.c Libft/ft_putnbr.c ft_check_category.c ft_putchar.c)