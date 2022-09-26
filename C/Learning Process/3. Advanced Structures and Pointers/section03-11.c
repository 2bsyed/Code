#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[] = "Ali";

    char *p = name;
    for(;*p != '\0' ;)
        printf("%c", *p++);

    printf("\n%d", *p == '\0');
    return 0;
}
