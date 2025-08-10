#include "libft.h"

/*
 * @brief Allocates a new block of memory with the given size.
 * @param size The size of the new memory that will be allocated.
 * @return Returns a pointer to the new address with the memory or NULL if the allocation went wrong.
 * @warning Need to use free() after to avoid memory leak.
 * */

void    *ft_memalloc(size_t size) {
    unsigned char *pointer = (unsigned char *)malloc(size);
    if (!pointer) return NULL;
    for (size_t i = 0; i < size; i++)
        pointer[i] = 0;
    return (void *)pointer;
}
