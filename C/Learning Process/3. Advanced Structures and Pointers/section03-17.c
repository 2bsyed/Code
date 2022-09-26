#include <stdio.h>
#include <stdlib.h>

void swap( int **p, int **q) { /// p ---> p=100, q ---> q=200
    int *temp = *p; /// 100
    *p = *q; /// p in the main = 200, p in the main ---> y
    *q = temp; /// q in the main = 100, q in the main ---> x
}
int main() {
    int x = 1; /// 100
    int y = 2; /// 200

    int *p = &x; /// p ---> x
    int *q = &y; /// q ---> y;

    printf("%p: %d, %p: %d\n", p, *p, q, *q);

    swap(&p,&q);
    /// p ---> y, q ---> x

    printf("%p: %d, %p: %d\n", p, *p, q, *q);
    return 0;
}
