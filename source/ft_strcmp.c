#include "libft.h"

/*
 * @brief Compares two strings.
 * @param s1 First string to be compared.
 * @param s2 Second string to be compared.
 * @return Returns zero if equal, >zero if 's1' is last, <zero if 's1' is first.
 * */

int ft_strcmp(const char *s1, const char *s2) {
    size_t i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}
