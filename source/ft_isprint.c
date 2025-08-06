#include "libft.h"

/*
 * @brief Check if 'c' is a printable character.
 * @param c Any character from ASCII table.
 * @return Returns 1 if true, 0 if false.
 * */

int ft_isprint(int c) {
    return (c >= 32 && c <= 127) ? 1 : 0;
}
