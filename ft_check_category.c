
#include "ft_printf.h"

int		ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}

int		ft_istype(int c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' ||
		c == 'x' || c == 'X' || c == '%' || c == 'p')
		return (1);
	return (0);
}

int		ft_isflag(int c)
{
	if (c == '-' || c == '0' || c == '.' || c == '*')
		return (1);
	return (0);
}

t_flags	ft_init_flags(void)
{
	t_flags	flags;

	flags.precision = 0;
	flags.precisionset = 0;
	flags.minus = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}
