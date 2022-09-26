/**
 Write a program which reads a positive integer value n, calculates and shows the
 result of the expression
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("enter your number: ");
    int n = 0;
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i<=n; i++)
        sum += (i+3) / (pow(i,2) -5);
    printf("%lf", sum);


    return 0;
}
