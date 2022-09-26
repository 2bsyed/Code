/**
fill an array with elements <= 150
if the user enters a number > 150 this number should not be inserted in the array
**/
#include <stdio.h>
#include <stdlib.h>

void fillArray(int arr[], int n) {
    for(int i = 0; i<n; i++)
        do {
            scanf("%d", &arr[i]);
        } while(arr[i] > 150);
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int arr[5] = {};
    fillArray(arr, 5);
    printArray(arr, 5);
    return 0;
}
