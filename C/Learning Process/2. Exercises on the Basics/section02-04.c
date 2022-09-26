/** Write a program which reads a positive integer value and shows its divisors
Notes:
let n be our number
- let d be a divisor of n --> n/d gives a remainder = 0
- n is a divisor of n
- The strict divisors of n are <= n/2 (excluding n)
**/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("enter your number: ");
    int n = 0;
    scanf("%d", &n);
    if ( n == 1)
        printf("1");
    else {
            printf("the divisors of %d are: ", n);
            printf("1 ");
            for (int i = 2; i <= n/2; i++)
                if (n%i == 0)
                    printf("%d ", i);
            printf("%d", n);
    }

    return 0;
}
