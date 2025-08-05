#include "libft.h"

/*
 * @brief Copies the string in 'src' to the pointer/memory 'dest' given.
 * @param dest Address that will receive a copy of the string.
 * @param src The string that will be copied.
 * @return Returns a pointer to the copied string.
 * */

char    *ft_strcpy(char *dest, const char *src) {
    size_t i = 0;
    while (*(src + i) != '\0') {
        *(dest + i) = *(src + i);
        i++;
    }
    return dest;
}
