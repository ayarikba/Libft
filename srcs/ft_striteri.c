#include "libft.h"

void ft_striteri(char *x, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while(x[i])
    {
        f(i, &x[i]);
        i++;
    }
    return ;
}