#include "ft_printf.h"

//we need to treat the f_s now for %xX%

int	format_specifier(va_list arg, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += print_chr(va_arg(arg, char));
	else if (format == 's')
		count += print_str(va_arg(arg, char *));
	else if (format == 'p')
		count += print_ptr(va_arg(arg, void *));
	else if (format == 'i' || format == 'd')
		count += print_int(va_arg(arg, int));
	else if (format == 'u')
		count += print_uns_int(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		count += print_hex(va_arg(arg, unsigned int), format);
	else
	{
		write(1, "%", 1);
		count += 1;
	}
	return (count);
}
