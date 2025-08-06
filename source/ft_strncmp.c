#include "libft.h"

/*
 * @brief Compares two string while 'n'.
 * @param s1 First string to be compared.
 * @param s2 Second string to be compared.
 * @param n Number of bytes to compare.
 * @return Returns zero if equal, <zero if first, >zero if last.
 * */

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    size_t i = 0;
    while (i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}
