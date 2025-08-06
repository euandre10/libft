#include "libft.h"

/*
 * @brief Check if 'c' is an character of the alphabet.
 * @param c Any character from ascii table.
 * @return Returns 1 if true, 0 if false.
 * */

int ft_isalpha(int c) {
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    return 0;
}
