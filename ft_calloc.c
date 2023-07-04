#include "libft.h"

void *ft_calloc(size_t memb, size_t size)
{
   size_t total_size = memb * size;
    void *ptr;

    if (total_size == 0)
        return 0;

    ptr = malloc(total_size);
    if (!ptr)
        return 0;

    unsigned char *byte_ptr = ptr;
    for (size_t i = 0; i < total_size; i++)
    {
        byte_ptr[i] = 0;
    }

    return ptr;
}