/** Write a program which reads a sequence of positive integer values and shows their
product and their sum when the user fills a negative number **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int product = 1;
    int n = 0;

    printf("enter numbers, enter a negative number to stop:\n");
    while (1) {
        scanf("%d", &n);
        if (n < 0)
            break;
        sum += n;
        product *= n;
    }

    printf("sum= %d, product = %d", sum, (sum==0) ? 0 : product);
    return 0;
}
