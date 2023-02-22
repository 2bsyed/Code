#include<stdio.h>
int main(){
    int m,k,n,t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&m,&k,&n);
        if(k*n<=m){
            printf("Case %d: Yes\n",i+1);
        }
        else
        printf("Case %d: No\n",i+1);
    }
}