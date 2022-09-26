#include <stdio.h>
#include <stdlib.h>

int main()
{

    /// 1 dimensional arrays
    int nums[] = {5,6,3,1,8,2,5,9,1,0}; /// initializing

//    nums[0] = 5; /// first element
//    nums[3] = 2; /// fourth element
//    nums[9] = 3; /// last element

    printf("%d %d %d\n", nums[0], nums[3], nums[9]);
    printf("(Garbage): %d %d %d\n\n", nums[1], nums[4], nums[7]);

    /// Warning
    printf("Warning:\n");
    nums[10] = 9; /// NOT ALLOCATED
    printf("%d\n\n",nums[10]);

    /// 2 dimensional arrays
//    int numsTable[2][3] = {};

    int numsTable[2][3] = {
        {1,2,3},
        {4,5,6}
    };
//    numsTable[0][0] = 1;
//    numsTable[1][1] = 2;
    printf("%d %d %d\n\n", numsTable[0][0], numsTable[1][1], numsTable[1][2]);

    /// ADDRESSES:

    printf("%d %d\n", &nums[0], nums);

    printf("%d %d %d\n", &numsTable[0], &numsTable[0][0], numsTable);
    printf("%d %d\n", &numsTable[1], &numsTable[1][0]);

    printf("%d\n", &numsTable[1][1]);

    /// arrays have fixed size 
    /// you can put as much dimensions as you want (some compilers have a maximum)
    /// int numbers[2][3][2]
    return 0;
}
