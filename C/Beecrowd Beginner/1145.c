#include<stdio.h>
int main(){
    int x,y,m=0;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++){
        printf("%d",i);
        m++;
        if(m==x){
            printf("\n");
            m=0;
            continue;
        }
        printf(" ");
    }
    return 0;
}