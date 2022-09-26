#include<stdio.h>
int main(){
    int num[100],max=0;
    for(int i=0;i<100;i++){
        scanf("%d",&num[i]);
        max=(max>num[i])?max:num[i];
    }
    printf("%d\n",max);
    for(int i=0;i<100;i++){
        if(num[i]==max){
            printf("%d\n",i+1);
        }
    }
    return 0;
    }
