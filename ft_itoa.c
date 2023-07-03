#include "libft.h"


static int find_len(int n)
{
    int i ;


    i = 0;
    if (!n)
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

static int find_power(int x)
{
    int i;

    i = 1;
    while (x)
    {
        i *=10;
        x--;
    }
    return (i);
}

char *ft_itoa(int n)
{
    int len ;
    int i;
    char *x;

    len = find_len(n);
    x = malloc(sizeof(char) * (len + 1));
    x[len] = '\0';
    len--;
    i = 0;
    if (n < 0)
    {
        x[0] = '-';
        n *= -1;
    }

    while (n && x[len] != '-')
    {
        x[len] = (n % 10) + '0';
        len--;
        n /= 10;
    }
    return (x);
}