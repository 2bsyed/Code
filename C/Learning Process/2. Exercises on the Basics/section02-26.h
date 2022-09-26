#include <stdlib.h>
#include <stdio.h>


int counter = 0;

void addNumber(int arr[]) {
printf("Enter the number you want to add: ");

int userNumber = 0;
scanf("%d", &userNumber);

arr[counter] = userNumber;
counter++;

}

void removeNumber(int arr[]) {
    printf("Enter the number to be removed: ");

    int toRemove = 0;
    scanf("%d", &toRemove);

    int index = findNumber(arr, toRemove);
    if( index < 0 ) {
        printf("The number does not exist in the array!\n");
        return ;
    }

    counter--;
    for(int i = index; i < counter; i++)
        arr[i] = arr[i+1];
}

int findNumber(int arr[], int searchElement) {
    for(int i = 0; i < counter; i++)
        if(arr[i] == searchElement)
            return i;
    return -1;
}
void printArray(int arr[]) {
    printf("[ ");
    for(int i = 0; i < counter; i++)
        printf("%d ", arr[i]);
    printf("]");
    printf("\n");
}

void copyArray(int source[], int destination[]) {
    for(int i = 0; i < counter; i++)
        destination[i] = source[i];
}

void swap(int arr[], int i, int j) {
    /// arr[i], arr[j], 2,3
    int temp = arr[i]; /// 2
    arr[i] = arr[j]; /// arr[i] = 3
    arr[j] = temp; /// arr[j] = 2

}

void printSorted(int arr[]) {
    int copy[counter];
    copyArray(arr, copy);

    for(int i = 0; i < counter; i++) /// copy
        for(int j = i + 1; j < counter; j++) /// 1 2 3 5 6
            if (copy[i] < copy[j])
                swap(copy, i, j);

    printArray(copy);
}








