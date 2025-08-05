#include "libft.h"

/*
 * @brief Copies the memory values from 'src' to 'dest'.
 * @param dest Pointer to a block of memory that will receive the values.
 * @param src Pointer that will read all values already in use.
 * @param n Size of the block of memory that will be copied.
 * @return Returns a pointer to the memory with all values copied.
 * */

void    *ft_memcpy(void *dest, const void *src, size_t n) {
    unsigned char *pointer = (unsigned char *)dest;
    const unsigned char *source = (const unsigned char *)src;
    for (size_t i = 0; i < n; i++)
        *(pointer + i) = *(source + i);
    return pointer;
}
