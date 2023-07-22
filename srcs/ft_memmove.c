#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    if (!dest && !src )
        return (NULL);
    i = 0;
    d = (unsigned char*)dest;
    s = (unsigned char *)src;
    if (d == s)
        return (d);
    if (d > s && (s+n) > d)
    {
        i = n;
        while (i)
        {
            i--;
            d[i] = s[i];

        }
    }

    else
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}