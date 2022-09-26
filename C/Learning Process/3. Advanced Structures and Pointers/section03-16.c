#include <stdio.h>
#include <stdlib.h>

int main() {
    /**
    var, value, address, type
    x, 10, 100, int
    p, 100, 200, int *
    q, 200, 300, int **
    z, 300, 400, int ***
    **/

    int x, *p;
    x = 10;
    p = &x;
    int **q = &p;
    /// q ---> p ---> x

    printf("%d %d", **q, *p);
}
