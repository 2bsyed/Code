#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=1;i<=m;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}