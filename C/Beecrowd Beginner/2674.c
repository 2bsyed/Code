#include<stdio.h>
#include<math.h>

int prim(int x)
{
    int i, d=1;
    if(x==0 || x==1)
    {
        d=0;
    }
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            d=0;
            break;
        }
    }
    return d;
}

int main()
{
    int n, c=1;
    while((scanf("%d",&n))!=EOF)
    {
        c = prim(n);
        if(c==0)
        {
            printf("Nada\n");
        }
        else
        {
            int e, j=0, k=0, n1;
            while(n!=0)
            {
                n1 = n%10;
                j++;
                e = prim(n1);
                if(e==1)
                {
                    k++;
                }
                n /= 10;
            }
            if(j==k)
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
    }
    return 0;
}