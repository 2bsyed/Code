/**
 Write a program which reads a positive integer number n, calculates and shows the
 following:

 if n is divisible by 7: 1/1 + 1/2 + 1/3 + 1/4 +... + 1/n
 else: n/1 + n/2 + n/3 + n/4 +... + n/(n-1) + 1

**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your number: ");
    int n = 0;
    scanf("%d", &n);

    double sum = 0;
    if (n%7 == 0)
        for (double i = 1; i<=n; i++)
            sum += 1/i;
    else
        for (int i = 1; i<=n; i++)
            sum += (double) n/i;

    printf("%lf", sum);

    return 0;
}
