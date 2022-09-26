/**
fill an array of integers and calculate the sum and the product of its elements
**/

#include <stdio.h>
#include <stdlib.h>

void fillArray(int arr[], int n) {
    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
}
int main() {
    int arr[5] = {};

    fillArray(arr, 5);

    int sum = 0;
    int product = 1;
    for(int i = 0; i<5; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    printf("%d %d", sum, product);
    return 0;
}
