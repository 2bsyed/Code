//4d
#include<stdio.h>
int main(){
    int n,t,max=0,min=2147483647;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t>max)max=t;
        else if(t<min)min=t;

    }
    printf("Discount : %d%%",max-min);
}