#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t==1971)
        printf("Joy Bangla\n");
        else if(t%2==0)
        printf("Bangla\n");
        else
        printf("Joy\n");
    }
}