#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *line, ...);

int	main(void)
{
	/* Call with 3 integers (-1 is used as terminator). */
	//out1 = ft_printf("ft_printf: %i4dlol %i-*.*i %i200s %i*k %i.2i end", 67890, 4, 22, 1, "50", 15);
	//	ft_printf("\n");
	//	int out2 = printf("originalf: %i4dlol %i-*.*i %i200s %i*k %i.2i end", 67890, 4, 22, 1, "50", 15);
/*
    int out11 = ft_printf("\nft_printf: |%i0*k|");
    int out12 = printf("\noriginalf: |%i0*k|");
    out1 = %i\tout2 = %i", out11, out12);
*/
    int out1, out2, count;

    count = 0;
//    printf("\033[0;31m"); //Set the text to the color red.
//    printf("Hello\n"); //Display Hello in red.
//    printf("\033[0m"); //Resets the text to default color.
    printf("\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
	fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m\n");
    if (count > 0)
        printf("\n\033[1;31mYou sucked %d times\033[0m\n", count);
    else
        printf("\n\033[32;1mYou suck anyway, btw no errors in your %%d&%%i output with flags\033[0m\n");
	//	printf("\n%is %is%ir", "f", 1, 1, 3.0, 4, 5 );
	//    printf("\n");
}

/* Returns the standard deviation of a variable list of integers. */
//printf("originalf: %0*.*ii end", 200, -30, -123456, 10, -15, -123456,  2, -3, -123456);
//printf("originalf: %0*.*ik end");
