#include "libft.h"


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (!s1 || !s2 || !n)
        return 0;
    size_t i;
    unsigned char *x;
    unsigned char *y;

    i = 0;
    x = (unsigned char *)s1;
    y = (unsigned char *)s2;

    while (x[i] == y[i] && i < n)
    {
        i++;
    }
    if (i == n)
        return (0);
    return (x[i] - y[i]);
}