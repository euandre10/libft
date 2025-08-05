#include "libft.h"

/*
 * @brief Counts the size of the string.
 * @param s The string that will be counted.
 * @return Returns the size of the given string.
 * */

size_t  ft_strlen(const char *s) {
    size_t str_len = 0;
    while (*(s) != '\0') {
        str_len++;
        s++;
    }
    return str_len;
}
