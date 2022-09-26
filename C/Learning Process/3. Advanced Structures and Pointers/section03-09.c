#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 7;
    int *p = &num;

    printf("%p %d", &num, *p);

    return 0;
}
