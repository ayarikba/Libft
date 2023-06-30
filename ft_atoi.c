#include "libft.h"

int ft_atoi(const char *nptr)
{
    long num;
    int i;
    int sign;

    i = 0;
    sign = 1;
    num = 0;
    while (nptr[i] && (nptr[i] == '-' || nptr[i] == '+'))
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i])
    {
        num = ((nptr[i] - 48) + (10 * num));
        i++;
    }
    num *= sign; 
    return (num);
}