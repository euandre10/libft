#include "libft.h"

/*
 * @brief Check if 'c' is a character from ASCII table.
 * @param c Any character to be checked.
 * @return Returns 1 if true, 0 if false.
 * */

int ft_isascii(int c) {
    return (c >= 0 && c <= 127) ? 1 : 0;
}
