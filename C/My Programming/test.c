#include<stdio.h>
int main(){
    
    for(int i=0;i<=5;i++){
        int k=5;
        for(int j=0;j<i;j++){

            for(;k>i;k--){
                printf(" ");
            }
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}