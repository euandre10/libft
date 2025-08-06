#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n) {
	size_t i = 0;
	size_t dest_len = ft_strlen(dest);
	size_t src_len = ft_strlen(src);
	while (i < n) {
		if (i == src_len) {
			*(dest + dest_len + 1) = '\0';
			break;
		}
		*(dest + dest_len) = *(src + i);
		i++; dest_len++;
	}
	return dest;
}
