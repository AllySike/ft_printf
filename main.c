#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *line, ...);

int main( void )
{
    /* Call with 3 integers (-1 is used as terminator). */
    ft_printf("%de%ds%dr", 3, 4, 5 );
    printf("\n");
}

/* Returns the standard deviation of a variable list of integers. */
