#include<stdio.h>
int main(){
    double s,i;
    scanf("%lf",&s);
    if(s<=400){
        i=s*.15;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",(s+i),i);
    }
    else if(s<=800){
        i=s*.12;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",(s+i),i);
    }
    else if(s<=1200){
        i=s*.10;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",(s+i),i);
    }
    else if(s<=2000){
        i=s*.07;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",(s+i),i);
    }
    else if(s>2000){
        i=s*.04;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",(s+i),i);
    }
}