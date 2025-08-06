#include "libft.h"

/*
 * @brief Duplicates a string to a new memory allocated area.
 * @param s The string that will be duplicated.
 * @return Returns a pointer to the new duplicated string.
 * @warning Needs to use free() after its final use in the program, avoiding memory leaks.
 * */

char    *ft_strdup(const char *s) {
    size_t i = 0, strLen = ft_strlen(s);
    char *new_dup = (char *)malloc(sizeof(char) * strLen);
    if (!new_dup) return NULL;
    while (*(s + i) != '\0') {
        *(new_dup + i) = *(s + i);
        i++;
    }
    return new_dup;
}
