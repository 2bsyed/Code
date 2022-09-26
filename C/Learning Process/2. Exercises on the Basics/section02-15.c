/**
Write a program to find out if a 4-digit number is a lucky number.
A is a lucky number if A+B = C+D
**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("enter a 4-digit number: ");
    int n = 0;
    scanf("%d", &n);

    int isLucky = n%10 + (n/10)%10 == (n/100)%10 + (n/1000)%10;
    printf((isLucky) ? "lucky number" : "not lucky number");
    return 0;
}
