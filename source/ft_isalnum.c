#include "libft.h"

/*
 * @brief Check if 'c' is an alphabet character or a digit (0-9).
 * @param c Any character from ASCII table.
 * @return Returns 1 if true, 0 if false.
 * */

int ft_isalnum(int c) {
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= '0' && c <= '9') return 1;
    return 0;
}
