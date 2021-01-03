cmake_minimum_required(VERSION 3.17)
project(CLion C)

set(CMAKE_C_STANDARD 99)

add_executable(CLion main.c ft_printf.c Libft/ft_putchar.c Libft/ft_putnbr.c)