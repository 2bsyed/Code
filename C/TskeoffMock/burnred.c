#include<stdio.h>
int main(){
    int x,y,z,m;
    scanf("%d %d %d %d",&x,&z,&y,&m);
    if(x>=y){
        printf("%d\n",(y*(z-m)+((x-y)*z)));
    }
    else
        printf("%d\n",(x*z));

    return 0;
}