#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t size)
{
    size_t  i;
    size_t  j;

    j = 0;
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    if (size < ft_strlen(dest))
        return (ft_strlen(src) + size);
    i = ft_strlen(dest);
    while (src[j] && i + j + 1 < size)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i + ft_strlen(src));
}