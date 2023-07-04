#include "libft.h"



char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return ((char*)(s + i));
}