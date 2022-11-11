#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&a+c>b&&c+b>a){
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    printf("Area = %.1f\n",(0.5*(a+b)*c));
}