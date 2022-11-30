#include <stdio.h>
 
int main() {
 
    int x,y;
    float r;
    scanf("%d %d",&x,&y);
    switch(x){
        case 1:
            r=y*4.00;
            break;
        case 2:
            r=y*4.50;
            break;
        case 3:
            r=y*5.00;
            break;
        case 4:
            r=y*2.00;
            break;
        case 5:
            r=y*1.50;
            break;
    }
    printf("Total: R$ %.2f\n",r);
 
    return 0;
}