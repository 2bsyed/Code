/**
Fibonacci sequence:  1, 1, 2, 3, 5, 8, 13, 21,...
**/

#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if(n==1 || n==2) return 1;

    int i1=1, i2=1;

    int fibNumber = 0;
    for(int i = 1; i <= n-2; i++) {
        fibNumber = i1 + i2;
        i1 = i2;
        i2 = fibNumber;
    }

    return fibNumber;
}


int main() {
    printf("enter n: ");
    int n = 0;
    scanf("%d", &n);

    printf("the fib number is %d", fib(n));

    return 0;
}
