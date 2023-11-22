#include <stdio.h>
int main()
{
    int n, sum = 0, mult = 1;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            sum += i;
            printf("%d+", i);
        }
        if (i == n)
            printf("=%d\n", sum);
        if (i > n)
        {
            int j = i - n;
            mult *= j;
            printf("%d*", j);
        }
        if (i == 2 * n)
            printf("=%d\n", mult);
    }
}