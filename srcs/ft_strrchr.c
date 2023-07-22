#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    int i;

    i = ft_strlen(s);
    while (s[i] != c && i)
        i--;
    if (s[i] != c)
        return (NULL);
    return ((char*)(s + i));
}