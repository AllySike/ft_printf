cmake_minimum_required(VERSION 3.17)
project(CLion C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c ft_printf.c ft_char_treatment.c tester.c
        ft_p_treatment.c ft_putchar.c ft_int_treatment.c ft_str_helpers.c ft_flags_treatment.c ft_check_category.c ft_string_treatment.c ft_helpers.c ft_u_treatment.c ft_x_treatment.c nikita_main.c)