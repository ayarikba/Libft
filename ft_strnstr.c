#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t n)
{
    if (!little || !little[0])
        return ((char *)big);
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    while (big[i] && i < n)
    {
        j = 0;
        while (big[i + j] && little[j] && big[i + j] == little[j] && (i + j) < n)
        {
            j++;
            if (little[j] == '\0')
                return ((char *)&big[i]);
        }
        i++;
    }
    return (NULL);
}