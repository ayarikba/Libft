#include "libft.h"


int ft_strncmp(const char* s1, const char* s2, size_t n)
{
    if (!s1 || !s2 || !n)
        return (0);

    size_t i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    return (s1[i] - s2[i]);
}