#include <stdio.h>
int main()
{
    int x, y;
    int max, min, sum = 0;
    scanf("%d %d", &x, &y);
    max = (x > y) ? x : y;
    min = (y < x) ? y : x;
    if (min % 2 == 0)
    {
        for (int i = min + 1; i < max; )
        {
            sum += i;
            i += 2;
        }
    }
    else
    {
        for (int i = min + 2; i < max; )
        {
            sum += i;
            i += 2;
        }
    }
    printf("%d\n", sum);
    return 0;
}