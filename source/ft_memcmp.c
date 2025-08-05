#include "libft.h"

/*
 * @brief Compares two bytes of memory.
 * @param s1 The first byte/value to compare.
 * @param s2 The second byte/value to compare.
 * @param n Size of total bytes that will be compared.
 * @return Returns 0 if equal, <0 if less than, >0 if greater than the compared bytes.
 * */

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;
    for (size_t i = 0; i < n; i++) {
        if (*(ptr1) != *(ptr2)) {
            if (*(ptr1) > *(ptr2)) return *(ptr1) - *(ptr2);
            if (*(ptr1) < *(ptr2)) return *(ptr1) - *(ptr2);
        }
    }
    return *(ptr1) - *(ptr2);
}
