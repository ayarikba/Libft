#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *x;

    x = ft_itoa(n);
    ft_putstr_fd(x, fd);
    return ;
}