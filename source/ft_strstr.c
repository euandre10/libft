#include "libft.h"

/*
 * @brief Search for the substr in the 'haystack' str.
 * @param haystack The string that will be searched.
 * @param needle The substr that will be searched for.
 * @return Returns a pointer to the first occurrence of the substr. NULL if not found.
 * */

char    *ft_strstr(const char *haystack, const char *needle) {
    size_t needle_len = ft_strlen(needle);
    size_t i = 0, j = 0;
    for (; haystack[i] != '\0'; i++) {
        j = 0;
        if (haystack[i] == needle[j]) {
            for (j = j + 1; needle[j] != '\0'; j++)
                if (haystack[i + j] != needle[j]) break;
        }
        if (j == needle_len) return (char *)(haystack + i);
    }
    return NULL;
}
