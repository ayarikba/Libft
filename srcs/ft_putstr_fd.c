#include "libft.h"

void ft_putstr_fd(char *x, int fd)
{
    int i;

    i = -1;
    while (x[++i])
        write(fd, &x[i],1);

    return ;
}