#include <stdio.h>
 
int main() {
 
    int n,p,q,r;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&p,&c,&q);
    switch(c){
        case '+':
        r=p+q;
        break;
        case '*':
        r=p*q;
        break;
    }
    if(r>n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");

 
    return 0;
}