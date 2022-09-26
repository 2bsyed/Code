/**
 Write a program which reads a sequence of positive real numbers. The program
 stops when the user fills a negative value and show the maximum and the minimum
 of these numbers.
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter number: ");
    int n = 0;
    scanf("%d", &n);

    if (n < 0) return 0;

    int min = n, max = n;
    while(1) {
        scanf("%d", &n);
        if(n < 0) break;

        min = (n < min) ? n : min;
        max = (n > max) ? n : max;

    }

    printf("min=%d , max=%d", min, max);

    return 0;
}
