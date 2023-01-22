//4e
#include<stdio.h>
int main(){
    int n,sum=10;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        sum=2*sum;
    }
    printf("Investmet ammount : %d",sum);
}