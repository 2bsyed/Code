#include<stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(a=a;a<=b;a++)
    sum+=a;
    printf("%d\n",sum);
    return 0;
}