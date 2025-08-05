#include "libft.h"

/*
 * @brief Set the values of the given block of memory.
 * @param s Pointer to the memory address.
 * @param c Value (in characters, from 0 to 255).
 * @param n Size of bytes that will be manipulated.
 * @return Returns a pointer to the memory address with the new values.
 * */

void    *ft_memset(void *s, int c, size_t n) {
    unsigned char *pointer = (unsigned char *)s;
    unsigned char ch = (unsigned char)c;
    for (size_t i = 0; i < n; i++)
        *(pointer + i) = ch;
    return pointer;
}
