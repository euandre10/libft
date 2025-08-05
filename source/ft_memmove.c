#include "libft.h"

/*
 * @brief Copies the values of the given memory, dealing with overlaps.
 * @param dest Memory area that the values will be received.
 * @param src Memory area that the values are copied.
 * @param n Size of the memory area that will be moved/copied.
 * @return Returns a pointer to the 'dest' address.
 * */

void    *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *pointer = (unsigned char *)dest;
    const unsigned char *source = (const unsigned char *)src;
    char buffer[n];
    for (size_t i = 0; i < n; i++)
        *(buffer + i) = *(source + i);
    for (size_t j = 0; j < n; j++)
        *(pointer + j) = *(buffer + j);
    return pointer;
}
