#include "libft.h"


void *ft_memchr(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *x;
    unsigned char _ch;

    i = 0;
    x = (unsigned char*)s;
    _ch = (unsigned char)c;

    while (x[i] != _ch && i < n - 1)
                    i++;
    if (x[i] == _ch)
        return ((void *)&x[i]);
    return (NULL);
}