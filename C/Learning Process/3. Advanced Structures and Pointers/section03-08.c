#include <stdio.h>
#include <stdlib.h>

void inc( int *p ) { /// p ---> num in the main
    (*p)++;
}
int main() {
    int num = 7;
    int *p = &num; /// p ---> num

    inc(p);
    printf("%d", num);

    int *p2, *p3;
    return 0;
}
