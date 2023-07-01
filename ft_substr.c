#include "libft.h"

char *ft_substr(char const *ptr, unsigned int s, size_t n)
{
    if (!ptr || !ptr[0] || !n)
        return NULL;
    int i;
    char *dup;

    i = 0;
    dup = malloc(sizeof(char) * (n + 1));
    if (!dup)
        return (NULL);

    while (ptr[s + i] && i < (n))
    {
        dup[i] = ptr[s + i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}