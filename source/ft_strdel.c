#include "libft.h"

/*
 * @brief Free the given memory block and sets the pointer to NULL, deleting the string.
 * @param as Memory address to the pointer of the string.
 * */

void    ft_strdel(char **as) {
    free(*as);
    *as = NULL;
}
