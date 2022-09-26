/** Write a program which reads a positive integer value N,then calculates and shows the
 result of the expression: 1 + 4 + 7 + 10 +... ( <=N )

 ex:
 N=7: 1+4+7
 N=12: 1+4+7+10
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a number: ");
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i += 3)
        sum += i;
    printf("%d",sum);

    return 0;
}
