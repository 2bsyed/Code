#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 6;

    void *p = &num;

    printf("%d", *((int *) p));

    return 0;
}
