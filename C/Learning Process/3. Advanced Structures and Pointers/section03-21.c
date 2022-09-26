#include <stdio.h>
#include <stdlib.h>

void printArray(int (*arr)[4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n\n");
    }
}
int main()
{
    int a[4][4]={1,2,3,4,
                 11,22,33,44,
                 111,222,333,444,
                 1111,2222,3333,4444};

    printArray(a);
    /// *(*(arrayName + indexRow) + columnRow)
    printf("%d ", **a);
    printf("%d ", *(*a + 1 ));
    printf("%d ", *(*(a + 2) + 1 ));

    printf("\n\n%d ",a[2][3]); /// 444
    printf("%d ",*(a[1] + 1));
    printf("%d ",*(*(a+3) + 1 ));
    printf("%d ",*(*(a+2)+1));
    return 0;
}
