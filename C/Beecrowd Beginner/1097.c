#include<stdio.h>
int main(){
    int x=1,y;
    while(x<10){
        y=x+6;
        for(int i=0;i<3;i++){
            printf("I=%d J=%d\n",x,y--);
        }
        x+=2;
    }
    return 0;
}