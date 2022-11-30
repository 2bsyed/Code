#include<stdio.h>
int main(){
    float a='Z';
    while(a>'A'){
        int b =a--;
        printf("a \"%c\" & b\"%05.2f\"\n",b,a);
        if(a--=='Q') break;

    }
    return 0;
}