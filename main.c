#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *line, ...);

int main( void )
{
    /* Call with 3 integers (-1 is used as terminator). */
	int out1 = ft_printf("\n%-6clol %20c end", 'g', 50);
	int out2 = printf("\n%-6clol %20c end", 'g', 50);
	printf("\nout1 = %d\tout2 = %d", out1, out2);
//	printf("\n%s %ds%dr", "f", 1, 1, 3.0, 4, 5 );
//    printf("\n");
}

/* Returns the standard deviation of a variable list of integers. */
