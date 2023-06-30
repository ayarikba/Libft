#include "libft.h"


char *ft_strdup(const char *s)
{
    if (!s || !s[0])
        return (NULL);
    
    int i;
    int len;
    char *dup;

    len = ft_strlen(s);
    i = 0;
    dup = malloc(sizeof(char) * (len + 1));
    while(s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}