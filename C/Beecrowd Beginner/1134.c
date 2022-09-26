#include<stdio.h>
int main(){
    int a=0,g=0,d=0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n==4)
        break;
        switch(n){
            case 1:
            a++;
            break;
            case 2:
            g++;
            break;
            case 3:
            d++;
            break;
            default :
            continue;

        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}