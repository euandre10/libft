#include "libft.h"

/*
 * @brief Search for the first occurrence of 'c' in the given memory area.
 * @param s Pointer to the memory address that has the values.
 * @param c Character that the function will look for.
 * @param n Size of the memory area that will be searched.
 * @return Returns a pointer to the address of the 'c' first occurence. NULL if not found.
 * */

void    *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *pointer = (const unsigned char *)s;
    unsigned char ch = (unsigned char)c;
    for (size_t i = 0; i < n; i++)
        if (*(pointer + i) == ch)
            return (void *)(pointer + i);
    return NULL;
}
