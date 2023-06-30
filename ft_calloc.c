#include "libft.h"

void *calloc(size_t memb, size_t size)
{
    long i;
    void *ptr;

    i = (long)(memb * size);
    if (i > 2147483647 || i == 0)
        return (NULL);
    
    ptr = malloc(i * sizeof(char));
    ft_memset(ptr, 0, ((size_t) i));
    return (ptr);
}