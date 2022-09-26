/**
show the multiples of 7 in the array
**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1,2,7,8,14,15,20,21};

    for(int i = 0; i < 8; i++)
        if(arr[i] % 7 == 0)
            printf("%d ", arr[i]);

    return 0;
}
