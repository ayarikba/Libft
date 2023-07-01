#include "libft.h"


static int find_initial_index(char const    *s1, char const *set)
{
    if (!set || !set[0])
        return (0);
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (set[j] == s1[i])
            {
                i++;
                break;
            }
            j++;
        }
        if (!set[j])
            break;
    }
    return (i);
}

static int find_last_index(char const *s1, char const *set)
{
    if (!set || !set[0])
        return (ft_strlen(s1));
    
    int i;
    int j;

    i = ft_strlen(s1) - 1;
    j = 0;
    while (s1[i] && 0 < i)
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
            {
                i--;
                break ;   
            }
            j++;
        }
        if (!set[j])
            break ;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !s1[0])
        return (NULL);
    if (!set || !set[0])
        return (ft_strjoin(s1, ""));
    int first_index;
    int last_index;
    char *trimmed;

    first_index = find_initial_index(s1, set);
    last_index = find_last_index(s1, set);
    trimmed = ft_substr(s1, first_index, (last_index - first_index + 1));
    return (trimmed);
}