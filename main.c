#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[20] = "Andre";
	char new[10] = "Luiz";
	ft_strcat(s, new);
	printf("%s\n", s);
  return 0;
}

