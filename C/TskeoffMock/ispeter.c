#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==1){
        printf("YES\n");
    }
    else{
        if(b+c+d>1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;

}