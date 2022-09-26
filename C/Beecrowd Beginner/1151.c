#include<stdio.h>
int main(){
    int num1=0,num2=1,num3;
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("0\n");
    }
    else if(n==2){
        printf("1\n");
    }
    else{
        printf("0 1");
        for(int i=0;i<n-2;i++){
            num3=num1+num2;
            num1=num2;
            num2=num3;
            
            printf(" %d",num3);

    }
    printf("\n");
    }
    
return 0;
}