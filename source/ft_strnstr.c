#include "libft.h"

/*
 * @brief Search for the first occurrence of 'little' in 'big' while len.
 * @param big String that will be searched.
 * @param little Substring that will be searched.
 * @param len Size of characters that will be searched.
 * @return Returns a pointer to the address of the substr found. NULL if it wasn't found.
 * */

char    *ft_strnstr(const char *big, const char *little, size_t len) {
    if (!little) return NULL;
    size_t little_len = ft_strlen(little);
    size_t i = 0, j = 0;
    for (; i < len; i++) {
        j = 0;
        if (big[i] == little[j]) {
            for (j = j + 1; j < little_len; j++)
                if (big[i + j] != little[j]) break;
        }
        if (j == little_len) return (char *)(big + i);
    }
    return NULL;
}
