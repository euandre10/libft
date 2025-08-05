#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Andre";
    char *new = ft_strdup(s);
    printf("%s\n", new);
    return 0;
}

