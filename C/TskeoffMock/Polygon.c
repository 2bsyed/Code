#include<stdio.h>
int main(){
    int n;
    int a2=2,b;
    scanf("%d",&n);
    if(n%3==0)
    printf("Equilateral\n");
    else{
        while(1){
            b=n-a2;
            
            if(b<=0){
                printf("Invalid\n");
                break;
            }
            else if(a2>b){
                printf("Isosceles\n");
                break;
            }
            else
            a2+=2;

        }
    }
    return 0;
}