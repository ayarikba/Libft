#include "libft.h"
#include <ctype.h>
#include <unistd.h>
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else 
        return (0);
}