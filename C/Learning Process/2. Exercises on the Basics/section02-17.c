/**
check how many times an element N occurs in an array
**/

#include <stdio.h>
#include <stdlib.h>

int occurs(int arr[], int n, int searchElement) {
    int count = 0;
    for(int i = 0; i<n; i++)
        if(arr[i] == searchElement)
            count++;
    return count;
}

int main() {
    int arr[] = {1,5,6,3,8,9,4,1,0,4};
    printf("1 occurs %d times\n", occurs(arr, 10, 1));
    printf("3 occurs %d times\n", occurs(arr, 10, 3));
    printf("4 occurs %d times\n", occurs(arr, 10, 4));


    return 0;
}
