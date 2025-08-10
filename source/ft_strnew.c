#include "libft.h"

/*
 * @brief Creates a new 'str' with null bytes in its value.
 * @param size Size of the new str.
 * @return Returns a pointer to the new 'str' with all values equal to '\0'.
 * @warning Needs to use free() to avoid memory leak.
 * */

char    *ft_strnew(size_t size) {
    char *new_str = (char *)malloc(sizeof(char) * size);
    if (!new_str) return NULL;
    ft_memset(new_str, '\0', size);
    return new_str;
}
