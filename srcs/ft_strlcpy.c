#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    if (!dst || !src)
        return (0);
    if (!n)
        return (ft_strlen(src));
    size_t i;

    i = 0;
    while ( src[i] &&  i < (n -1))
    {  
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}