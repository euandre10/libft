#include "libft.h"

/*
 * @brief Concatenates the values of 'src' in 'dest' address.
 * @param dest Pointer to the memory address that will receive the concat str.
 * @param src String that will be used to concat.
 * @return Returns the 'dest' string concatenated, terminated with NULL value.
 * */

char	*ft_strcat(char *dest, const char *src) {
	size_t i = 0, dest_len = ft_strlen(dest);
	while (*(src + i) != '\0') {
		*(dest + dest_len) = *(src + i);
		dest_len++; i++;
	}
	*(dest + dest_len) = '\0';
	return dest;
}
