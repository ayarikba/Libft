#include "libft.h"


#include "libft.h"

void ft_putendl_fd(char *x, int fd)
{
    int i;

    i = -1;
    while (x[++i])
        write(fd, &x[i],1);

    write(fd, "\n",1);
    return ;
}