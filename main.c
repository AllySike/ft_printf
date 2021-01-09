#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *line, ...);

int	main(void)
{
	/* Call with 3 integers (-1 is used as terminator). */
	//	int out1 = ft_printf("ft_printf: %4dlol %-*.*i %20s %*k %.2i end", 67890, 4, 22, 1, "50", 15);
	//	ft_printf("\n");
	//	int out2 = printf("originalf: %4dlol %-*.*i %20s %*k %.2i end", 67890, 4, 22, 1, "50", 15);
	int out1 = ft_printf("ft_printf: %0*.*i %c end", 0, -10, -123456, 'e');
	ft_printf("\n");
	int out2 = printf("originalf: %0*.*i %c end", 0, -10, -123456, 'e');
	printf("\nout1 = %d\tout2 = %d", out1, out2);
	//	printf("\n%s %ds%dr", "f", 1, 1, 3.0, 4, 5 );
	//    printf("\n");
}

/* Returns the standard deviation of a variable list of integers. */
//printf("originalf: %0*.*i end", 20, -30, -123456);
//printf("originalf: %0*.*k end");
