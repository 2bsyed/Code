#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x;)
    {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}