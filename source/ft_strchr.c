#include "libft.h"

/*
 * @brief Search for the first occurrence of 'c' in the string.
 * @param s The string that will be searched.
 * @param c The character that will be searched in the str.
 * @return Returns a pointer to the found 'c' or NULL if 'c' not found.
 * */

char	*ft_strchr(const char *s, int c) {
	size_t i = 0;
	while (*(s + i) != '\0') {
		if (*(s + i) == c)
			return (char *)(s + i);
		i++;
	}
	return NULL;
}
