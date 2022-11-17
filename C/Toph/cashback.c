#include <stdio.h>
int main()
{
    int test, max;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int card;
        scanf("%d", &card);
        int m[card];
        float x[card], y[card];
        int j;
        for (j = 0; j < card; j++)
        {

            scanf("%d %f %f", &m[j], &x[j], &y[j]);
        }
        int ex;
        scanf("%d", &ex);
        int exp = 0, c;
        for (int k = 0; k < ex; k++)
        {
            scanf("%d", &c);
            exp += c;
        }
        for (j = 0; j < card; j++)
        {
            if (x[j] > y[j])
            {
                if (exp > m[j])
                {
                    max = m[j] * (x[j] / 100);
                }
                
            }
        }
    }
}