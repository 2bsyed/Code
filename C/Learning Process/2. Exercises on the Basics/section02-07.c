/**
 Write a program which reads a positive integer value N, calculates and shows the
 sum of the even numbers <= N

 (also, modify to get the sum of odd numbers)
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a number: ");
    int n = 0;
    scanf("%d", &n);

    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 1; i <= n; i++)
        if (i%2 == 0)
            sumEven += i;
        else
            sumOdd += i;

    printf("%d\n",sumEven);
    printf("%d",sumOdd);
    return 0;
}
