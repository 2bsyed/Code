#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c<91){
        printf("%d\n",(c-64));
    }
    else
    printf("%d\n",(c-96));
}