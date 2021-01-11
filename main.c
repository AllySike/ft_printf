#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *line, ...);
int	int_main(void);

int main()
{
    int_main();
}

int	int_main(void)
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
/*
    printf("\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
	fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%*.*i| |%%*.*d| |%%*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%0*.*i| |%%0*.*d| |%%0*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*.*i|  |%0*.*d|  |%0*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, 7, 123456, 10, 15, 123456,  2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, 123456, 10, 15, 123456,  2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, 7, -123456, 10, 15, -123456,  2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, 7, -123456, 10, 15, -123456,  2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, -7, 123456, 10, -15, 123456,  2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, 123456, 10, -15, 123456,  2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, 10, -7, -123456, 10, -15, -123456,  2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", 10, -7, -123456, 10, -15, -123456,  2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, 123456, -10, 15, 123456,  -2, 3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, 7, -123456, -10, 15, -123456,  -2, 3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%*.*d|  |%*.*d| %c end", -10, -7, 123456, -10, -15, 123456,  -2, -3, 123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%i%%-*.*i| |%%-*.*d| |%%-*.*d|, -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-*.*i|  |%-*.*d|  |%-*.*d| %c end", -10, -7, -123456, -10, -15, -123456,  -2, -3, -123456, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n===|%%0i| |%%.0d| |%%0.0d|, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0i|  |%.0d|  |%0.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0i|  |%.0d|  |%0.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n===|%%0i| |%%.0d| |%%0.0d|, 1, -1, 1===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0i|  |%.0d|  |%0.0d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0i|  |%.0d|  |%0.0d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n\n===|%%*i| |%%.*d| |%%*.*d|, 0, 0, 0, 0, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%*i|  |%.*d|  |%*.*d| %c end", 0, 0, 0, 0, 0, 0, 0, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%*i|  |%.*d|  |%*.*d| %c end", 0, 0, 0, 0, 0, 0, 0, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n===|%%0i| |%%.0d| |%%0.0d|, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0i|  |%.0d|  |%0.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0i|  |%.0d|  |%0.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n===|%%3i| |%%.3d| |%%3.3d|, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-3i|  |%.-3d|  |%-3.-3d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-3i|  |%.-3d|  |%-3.-3d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n\n===|%%.\\n5d| 10===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%.\n5d|", 10);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%.\n5d|", 10);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%-.k 5d| 10===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-.k 5d|", 10);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-.k 5d|", 10);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===|%%-..k 5d| 10===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-..k 5d|", 10);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-..k 5d|", 10);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n===|%%0-i| |%%0-.0d| |%%0-.0d|, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0-i|  |%-.0d|  |%0-.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0-i|  |%-.0d|  |%0-.0d| %c end", 0, 0, 0, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n===|%%-0i| |%%-.0d| |%%-0.0d|, 1, -1, 1===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-0i|  |%-.0d|  |%-.0d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-0i|  |%-.0d|  |%-.0d| %c end", 1, -1, 1, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n\n===|%%0*i| |%%0.*d| |%%0*.*d|, 0, 0, 0, 0, 0, 0, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%0*i|  |%0.*d|  |%0*.*d| %c end", 0, 0, 0, 0, 0, 0, 0, 'e');
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%0*i|  |%0.*d|  |%0*.*d| %c end", 0, 0, 0, 0, 0, 0, 0, 'e');
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===%%-5.d, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-5.d|", 0);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-5.d|", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===%%-5.0d, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%-5.0d|", 0);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%-5.0d|", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");
*/
    printf("\n\n===d_prec0val0_implicit%%.d, 0===\n");
    fflush(stdout);
    out1 = ft_printf("%.d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%.d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_prec0val0_w%%5.0d\", 0===\n");
    fflush(stdout);
    out1 = ft_printf("%5.0d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%5.0d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_prec0val0_w_impl%%5.d\", 0\", 0===\n");
    fflush(stdout);
    out1 = ft_printf("%5.d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%5.d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_prec0val0_wlj%%-5.0d, 0===\n");
    fflush(stdout);
    out1 = ft_printf("%-5.0d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%-5.0d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_prec0val0_wlj_impl%%-5.d, 0===\n");
    fflush(stdout);
    out1 = ft_printf("%-5.d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%-5.d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");


    printf("\n\n===d_width_neg_fits %%7d, -14===\n");
    fflush(stdout);
    out1 = ft_printf("%7d", -14);
    printf("\t%i\n", out1);
    out2 = printf("%7d", -14);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_width_zero_fits %%3d, 0===\n");
    fflush(stdout);
    out1 = ft_printf("%3d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%3d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_zp_pos_fits %%05d, 43===\n");
    fflush(stdout);
    out1 = ft_printf("%05d", 43);
    printf("\t%i\n", out1);
    out2 = printf("%05d", 43);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_zp_neg_fits %%07d, -54===\n");
    fflush(stdout);
    out1 = ft_printf("%07d", -54);
    printf("\t%i\n", out1);
    out2 = printf("%07d", -54);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===d_zp_zero_fits %%03d, 0===\n");
    fflush(stdout);
    out1 = ft_printf("%03d", 0);
    printf("\t%i\n", out1);
    out2 = printf("%03d", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");
/*

    printf("\n\n===%%05d, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%05d|", 0);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%05d|", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

    printf("\n\n===%%5.0d, 0===");
    fflush(stdout);
    out1 = ft_printf("\nft_printf: |%5.0d|", 0);
    printf("\t%i", out1);
    out2 = printf("\noriginalf: |%5.0d|", 0);
    printf("\t%i", out2);
    if (out1 != out2 && ++count)
        printf("\n\033[1;31mYou suck!\033[0m");
    else
        printf("\n\033[32;1mThis case is ok\033[0m\n");

*/
    if (count > 0)
        printf("\n\033[1;31mYou sucked %d times\033[0m\n", count);
    else
        printf("\n\033[32;1mYou suck anyway, btw no errors in your %%d & %%i output with flags\033[0m\n");
	//	printf("\n%is %is%ir", "f", 1, 1, 3.0, 4, 5 );
	//    printf("\n");
}
//to run the test print
// gcc -Wformat=0 *.c && ./a.out

/* Returns the standard deviation of a variable list of integers. */
//printf("originalf: %0*.*ii end", 200, -30, -123456, 10, -15, -123456,  2, -3, -123456);
//printf("originalf: %0*.*ik end");
