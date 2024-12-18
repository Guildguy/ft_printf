#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//above we´ll get the func prototype
int		ft_uns_int_len(unsigned int n);
char	*ft_uns_itoa(unsigned int n);
int		ft_int_len(int n);
char	*ft_itoa(int n);
int		ft_is_lower(int c);
#endif