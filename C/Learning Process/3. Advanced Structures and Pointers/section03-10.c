#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {1,2,3,4,5}; /// 100, 104, 108, 112, 116 -> 116 - 100 = 16/4 = 4+1 = 5

    printf("%d", &nums[4] - nums + 1);


    int i1 = 4;
    int *p1 = &i1;

    int i2 = 5;
    int *p2 = &i2;

    printf("%d", *p1 + *p2);
    printf("%d", *p1 + 2);
    printf("%d", *p1 * *p2);
    printf("%d", *p1 / *p2);
    return 0;
}
