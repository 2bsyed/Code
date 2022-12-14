#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("I hate ");
    if(n>1){
        for(int i=2;i<=n;i++){
            if(i%2==0){
                printf("that I love ");
            }
            else
            printf("that I hate ");
        }
    }
    printf("it\n");
}