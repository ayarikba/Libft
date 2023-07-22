#include "libft.h"

void *ft_memset(void *x, int y, size_t z)
{
    unsigned char *c;
    unsigned char k;
    size_t i;

    if (!x)
        return (NULL);

    c = (unsigned char *)x;
    k = (unsigned char)y;
    i = 0;
    while (i < z)
    {
        c[i] = k;
        i++; 
    }
    return (x);
}