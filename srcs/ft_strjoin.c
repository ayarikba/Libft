#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return (NULL);

    int i;
    int j;
    size_t len_s1;
    size_t len_s2;
    char *dup;

    i = 0;
    j = 0;
    len_s1 = ft_strlen(s1);  
    len_s2 = ft_strlen(s2);
    dup = malloc(sizeof(char)* (len_s1 + len_s2 + 1));
    if (!dup)
        return (NULL);

    while(s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        dup[i] = s2[j];
        i++;
        j++;
    }
    dup[i] = '\0';
    return (dup);
}
