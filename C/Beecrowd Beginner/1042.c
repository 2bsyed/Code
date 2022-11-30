#include<stdio.h>
int max(int a, int b)
{
    return ((a>b) ? a: b);
}
int min(int a, int b)
{
    return  (a<b) ? a: b;
}
int main()

{
    int a,b,c,x,y,z;

    scanf("%d %d %d",&a,&b,&c);
    x=max(a,max(b,c));
    z=min(a,min(b,c));
    y=a+b+c-x-z;

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",z,y,x,a,b,c);
}