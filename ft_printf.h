#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_uns_int_len(unsigned int n);
char	*ft_uns_itoa(unsigned int n);
int		ft_int_len(int n);
char	*ft_itoa(int n);
int		ft_is_lower(int c);
int		print_chr(char c);
int		print_str(char *str);
int		ptr_len(uintptr_t ptr);
void	ptr_write(uintptr_t ptr);
int		print_ptr(void *pointer);
int		print_int(int n);
int		print_uns_int(unsigned int n);
int		hex_len(unsigned int n);
void	hex_write(unsigned int n, char format);
void	print_hex(unsigned int n, char format);
#endif