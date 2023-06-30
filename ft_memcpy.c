#include "libft.h"

void *ft_memcpy(void    *dest, const void  *src, size_t n)
{
    if (!dest || !src)
        return NULL;
    size_t i;
    unsigned char *x;
    unsigned char *y;

    i = 0;
    x = (unsigned char *)dest;
    y = (unsigned char *)src;
    while (i < n)
    {
        x[i] = y[i];
        i++;
    }
    return (dest);
}