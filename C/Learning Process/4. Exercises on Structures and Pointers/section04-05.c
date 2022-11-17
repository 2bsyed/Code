/**
write a function that exchanges two values of type int
**/

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) { /// x ---> x, y ---> y
    int temp = *x; /// 1
    *x = *y;
    *y = temp;
}

int main() {
    int x = 1; /// 100, 2
    int y = 2; /// 200, 1

    swap(&x, &y);

    printf("%d %d", x, y);
    return 0;
}
