#include "libft.h"

/*
 * @brief Copies exactly 'n' bytes of 'src'. NULL bytes at end if 'src' < 'n'.
 * @param dest The pointer to the destination that will receive the copied str.
 * @param src String that will be used as source, to be copied.
 * @param n Size in bytes to be copied.
 * @return Returns a pointer to the 'dest' address.
 * */

char	*ft_strncpy(char *dest, const char *src, size_t n) {
	size_t i = 0, str_len = ft_strlen(src);
	while (i < n) {
		if (i >= str_len && str_len < n) {
			*(dest + i) = '\0';
			i++;
		}
		else {
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return dest;
}
