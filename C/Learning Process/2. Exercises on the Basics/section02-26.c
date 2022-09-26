#include <stdio.h>
#include <stdlib.h>
#include "section02-26.h"

int main() {
    int arr[50] = {};
    int userChoice = 0;
    do {

        printf("1-Add number\n");
        printf("2-Remove number\n");
        printf("3-Print\n");
        printf("4-Print sorted\n");
        printf("5-Find a number\n");
        printf("6-Exit\n\n\n");

        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if( userChoice == 1 )
            addNumber(arr);
        else if (userChoice == 2)
            removeNumber(arr);
        else if (userChoice == 3)
            printArray(arr);
        else if (userChoice == 4)
            printSorted(arr);
        else if (userChoice == 5) {
            printf("Enter the number you want to find: ");
            int searchElement = 0;
            scanf("%d", &searchElement);

            printf(findNumber(arr, searchElement) >= 0 ? "found\n" : "not found\n");
        }

    } while (userChoice != 6);

    printf("Good Bye.");
    return 0;
}
