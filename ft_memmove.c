#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *x;
    unsigned char *y;

    i = 0;
    x = (unsigned char*)dest;
    y = (unsigned char *)src;
    
    if ((x + n) > (y + n))
    {
        i = n;
        while (n)
        {
            x[i] = y[i];
            i--;
        }
    }

    else
    {
        while(i < n)
        {
            x[i] = y[i];
            i++;
        }
    }
    return (dest);
}