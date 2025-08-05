#include "libft.h"

/*
 * @brief Copies the values in memory until finds 'c'.
 * @param dest Memory address that will receive the copied values.
 * @param src Memory address that will be read and the values copied.
 * @param c Value that will be used as a condition to stop the copy.
 * @param n Size of memory block to be copied.
 * @return Returns a pointer to the next 'c' in 'dest' or NULL if not found.
 * */

void    *ft_memccpy(void *dest, const void *src, int c, size_t n) {
    unsigned char *pointer = (unsigned char *)dest;
    const unsigned char *source = (const unsigned char *)src;
    unsigned char ch = (unsigned char)c;
    for (size_t i = 0; i < n; i++) {
        if (*(source + i) == ch) {
            *(pointer + i) = *(source + i);
            pointer = (pointer + i);
            return ++pointer;
        }
        *(pointer + i) = *(source + i);
    }
    return NULL;
}
