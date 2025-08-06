#include "libft.h"

/*
 * @brief Concatenates 'src' string into 'dst' str, respecting the buffer size.
 * @param dst The string that will be receiving the concat.
 * @param src The string that will be used in the concatenation.
 * @param size The total size for copying the str.
 * @return Returns the total size for the full concatenation or the total size of the str in the buffer.
 * */

size_t	ft_strlcat(char *dst, const char *src, size_t size) {
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen(src);
	size_t total_len = size - dst_len;
	size_t i = 0, j = dst_len;
	if (dst_len >= size) return (size + src_len);
	while (i < total_len && *(src + i) != '\0') {
		*(dst + j) = *(src + i);
		i++; j++;
	}
	dst[j] = '\0';
	return dst_len + src_len;
}
