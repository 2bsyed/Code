#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min;
    scanf("%d", &a);
    max = a;
    min = a;
    scanf("%d", &b);
    max = (max < b) ? b : max;
    min = (min > b) ? b : min;
    scanf("%d", &c);
    max = (max < c) ? c : max;
    min = (min > c) ? c : min;
    printf("Max = %d Min = %d", max, min);
}