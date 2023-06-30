#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    if (!dst || !src || !n)
        return (0);
    size_t i;

    i = 0;
    while (dst[i] && src[i] && i < (n-1))
    {  
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
