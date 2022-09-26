#include <stdio.h>
#include <stdlib.h>

void byReference (int *x) {
    (*x)++;
}

int main()
{

    /** pass by reference (pass the address) **/
        int y = 3;
        printf("y before call= %d\n", y);
        byReference(&y);
        printf("y after call= %d\n", y);



    return 0;
}
