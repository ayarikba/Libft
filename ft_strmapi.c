#include "libft.h"



char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;
    char *x;

    i = 0;
    len = ft_strlen(s);
    x = malloc(sizeof(char) * (len + 1));
    while(s[i])
    {
        x[i] = f(i, s[i]);
        i++;
    }
    x[i] = '\0';
    return (x);
}