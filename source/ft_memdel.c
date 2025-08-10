#include "libft.h"

/*
 * @brief Deallocate memory and set the pointer to NULL.
 * @param ap Receive a memory address to a pointer.
 * */

void    ft_memdel(void **ap) {
    free(*ap);
    *ap = NULL;
}
