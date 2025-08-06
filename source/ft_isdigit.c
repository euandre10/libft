#include "libft.h"

/*
 * @brief Check if 'c' is a digit from 0 to 9.
 * @param c Any character from ascii table.
 * @return Returns 1 if true, 0 if false.
 * */

int ft_isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}
