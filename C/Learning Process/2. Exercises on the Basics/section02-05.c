/** Write a program which reads a positive integer value N and indicates if N is a perfect
 number or not. (N = the sum of its strict divisors) **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your number: ");
    int n = 0;
    scanf("%d", &n);

    int sum = 1; /// 1 is a divisor
    for (int i = 2; i <= n/2; i++)
                if (n%i == 0)
                    sum += i;
    printf((sum == n) ? "perfect number" : "not perfect number");


    return 0;
}
