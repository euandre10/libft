#include "libft.h"

/*
 * @brief Search for the last occurrence of 'c' in the str.
 * @param s The string that will be searched.
 * @param c The character that will be searched.
 * @return Returns a pointer to the last occurrence of 'c'. NULL if not found.
 * */

char    *ft_strrchr(const char *s, int c) {
    size_t str_len = ft_strlen(s);
    for (size_t i = str_len; i >= 0; i--) {
        if (*(s + i) == c)
            return (char *)(s + i);
    }
    return NULL;
}
