#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    int i;

    i = ft_strlen(s) - 1;
    while (s[i] && s[i] != c)
        i--;
    return ((char*)(s + i));
}