#include "libft.h"

/*
 * @brief Set all the values in the given block memory to zero.
 * @param s Pointer to the selected block of memory.
 * @param n Size of the given memory block to be manipulated.
 * */

void    ft_bzero(void *s, size_t n) {
    unsigned char *pointer = (unsigned char *)s;
    for (size_t i = 0; i < n; i++)
        *(pointer + i) = 0;
}
