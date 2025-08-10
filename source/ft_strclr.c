#include "libft.h"

/*
 * @brief Clear the given string, placing '\0' (null bytes) in its values.
 * @param s The string that will be cleared.
 * */

void    ft_strclr(char *s) {
    size_t len = ft_strlen(s);
    for (size_t i = 0; i < len; i++)
        s[i] = '\0';
}
