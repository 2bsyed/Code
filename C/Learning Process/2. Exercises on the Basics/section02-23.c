#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Hello, welcome to Our Carpet Cleaning Service\n");

    int smallRooms = 0;
    printf("\nHow many small rooms would you like cleaned? ");
    scanf("%d", &smallRooms);

    int largeRooms = 0;
    printf("\nHow many large rooms would you like cleaned? ");
    scanf("%d", &largeRooms);

    const double  pricePerSmallRoom = 25.0;
    const double  pricePerLargeRoom = 35.0;

    const double salesTax = 0.06;
    const int estimateExpiry = 30; /// days

    printf("\nEstimate for carpet cleaning service\n");
    printf("Number of small rooms: %d\n", smallRooms);
    printf("Number of large rooms: %d\n\n", largeRooms);

    printf("Price per small room: $%.2lf\n", pricePerSmallRoom);
    printf("Price per large room: $%.2lf\n", pricePerLargeRoom);

    double cost = (pricePerSmallRoom * smallRooms) + (pricePerLargeRoom * largeRooms);
    printf("Cost : $%.2lf\n", cost);

    double tax =  cost * salesTax;
    printf("Tax: $%.2lf\n", tax);

    printf("===============================\n");
    printf("Total estimate: $%.2lf\n", cost + tax);
    printf("This estimate is valid for %d days\n", estimateExpiry);


    return 0;
}
