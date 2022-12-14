#include<stdio.h>
int main(){
    int k,n;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++){
        if(n%10==0)
            n/=10;
        else
            n--;

    }
    printf("%d\n",n);
}