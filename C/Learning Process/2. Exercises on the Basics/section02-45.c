#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void arrange(int arr[], int n) {
    for(int i = 0, j = n-1; i < j; ) {
        if (arr[i]%2 == 0 && arr[j]%2 !=0)
            swap(arr, i++, j--);

        if (arr[i]%2 != 0 && arr[j]%2 == 0) {
            i++;
            j--;
        }


        if (arr[i]%2 != 0 && arr[j]%2 != 0)
            i++;

        if (arr[i]%2 == 0 && arr[j]%2 == 0)
            j--;

    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    arrange(arr, 10);
    printArray(arr,10);

    return 0;
}
