#include<stdio.h>
int main(){
    int x,z=0,sum=0,count=0;
    scanf("%d",&x);
    while(z<=x){
        scanf("%d",&z);
    }
    for(int i=x;sum<z;i++){
        sum+=i;
        count++;
    }
    printf("%d\n",count);
    
}