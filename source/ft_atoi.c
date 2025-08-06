#include "libft.h"

/*
 * @brief Converts a string to an int.
 * @param nptr String that will be converted.
 * @return Returns the int number converted from string.
 * */

int ft_atoi(const char *nptr) {
   size_t i = 0, result = 0, sign = 1;
   while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n') i++;
   if (nptr[i] == '-') {
       sign = -1;
       i++;
   }
   while (nptr[i] >= '0' && nptr[i] <= '9') {
       result = result * 10 + (nptr[i] - '0');
       i++;
   }
   return result * sign;
}
