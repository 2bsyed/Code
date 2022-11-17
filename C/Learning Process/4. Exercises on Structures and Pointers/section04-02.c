#include <stdio.h>
#include <stdlib.h>

void pointerTest() {
    int a = 1;
    int b = 2;
    int c = 3;

    int* p;
    int* q;

    p = &a; /// p ---> a
    q = &b; /// q ---> b
    c = *p; /// c = 1
    p = q; /// p ---> b
    *p = 13; /// b = 13

    printf("%d %d", *q, c); /// 13 1
}

int main() {
    pointerTest();
    return 0;
}
