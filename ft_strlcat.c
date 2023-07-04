#include "libft.h"

size_t ft_strlcat(char  *dst, const char    *src, size_t    n)
{
    if (!dst || !src || !n)
        return (0);
    
    size_t i;
    size_t dst_len;
    size_t src_len;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dst_len >= n)
        return (n + src_len);
    
    while (src[i] && i < (n -dst_len - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (src_len + dst_len);
}