/**
get the max and min in an array and how much they occur
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

int getMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i<n; i++)
        min = (arr[i] < min) ? arr[i] : min;

    return min;
}

int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i<n; i++)
        max = (arr[i] > max) ? arr[i] : max;

    return max;
}
int main() {
    int arr[] = {-9,0,1,2,-2,3,4,-9,-9,4};

    int max = getMax(arr,10);
    int min = getMin(arr,10);
    printf("the max is %d it occurs %d\n", max, occurs(arr,10,max));
    printf("the min is %d it occurs %d", min, occurs(arr,10,min));

    return 0;
}
