/** Write a program which calculates expression n^n where n is an integer value filled
by the user **/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> /// pow(base, exponent) -> double
double power(int base, int exponent) { /// base^exponent
    int result = 1;
    for (int i = 1; i<=exponent;i++)
        result *= base;
    return result;
}
int main() {
    printf("enter a number: ");
    int n = 0;
    scanf("%d", &n);

    printf("%d^2=%lf\n",n, power(n,2));
    printf("%d^%d=%lf\n", n, n, power(n,n));
    printf("%d^%d=%lf", n, n, pow(n,n));
    return 0;
}

/**
2^3:
int result = 1;
result = result * 2; // 2
result = result * 2; // 4
result = result * 2; // 8

n^n:
int result = 1;
use a loop that runs n times
result *= n;
**/
