/**
 Write a program which indicates if a positive number N, filled by the user, is prime
 or not
(N is a prime number if its divisors are 1 and N only)
**/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) {
    for(int i = 2; i <= n/2; i++)
        if(n%i == 0)
            return false;
    return true;
}
int main() {
    printf("enter your number: ");
    int n = 0;
    scanf("%d", &n);

    printf("%d is %s",n, ((isPrime(n))? "prime" : "not prime"));

    return 0;
}
