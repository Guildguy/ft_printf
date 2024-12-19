#include "ft_printf.h"

//for this file we have to treat: csp

int	print_chr(char c)
{
	int	count;
	
	count = 0;
	count += write(1, &c, 1);
	return (count);
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += write(1, "(NULL)", 6);
	}
	while (*str)
	{
		count += write(1, &str, 1);
		str++;
	}
	return (count);
}

int	ptr_len(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}

void	ptr_write(uintptr_t ptr)
{
	char	c;
	char	*hex;

	hex = "0123456789abcdef";
	if (ptr >= 16)
	{
		ptr_write(ptr / 16);
		ptr_write(ptr % 16);
	}
	else
	{
		c = hex[ptr];
		write(1, &c, 1);
	}
}

int	print_ptr(void *pointer)
{
	uintptr_t	ptr;
	int			count;

	ptr = (uintptr_t)pointer;
	count = 0;
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	ptr_write(ptr);
	count += ptr_len(ptr);
	return (count);
}
