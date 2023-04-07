#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *dest_ptr;
    const char  *src_ptr;
    // convert void pointers into char pointers
    dest_ptr = (char *)dest;
    src_ptr = (const char *)src;

    i = 0;
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }

    return (dest);
}
