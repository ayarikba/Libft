#include "libft.h"


static int find_len(int n)
{
    int i ;


    i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while (n)
    {
        i++;
        n /= 10;
    }
    return i;
}

char *ft_itoa(int n)
{
    int len ;
    char *x;
    len = find_len(n);
    x = malloc(sizeof(char) * (len + 1));
    x[len] = '\0';
    len--;
    long long y = n;
    if (y < 0)
    {
        x[0] = '-';
        y *= -1;
    }
    else if (y == 0)
    {
        x[0] = '0';
        return (x);
    }
    while (y && x[len] != '-')
    {
        x[len] = (y % 10) + '0';
        len--;
        y /= 10;
    }
    return (x);
}