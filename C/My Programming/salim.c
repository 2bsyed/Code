#include<stdio.h>

struct calculator{

int sum,sub;
float mul;
double div;
};num1,num2;


void sumcalculator(){

int sum=num1+num2;
printf("Sum is = %d\n",sum);

}


void subcalculator(){

int sub=num1-num2;
printf("Sub is = %d\n",sub);


}


void mulcalculator(){

float mul=num1*num2;
printf("Mul is = %.2f\n",mul);

}

void divcalculator(){

double div=(double)num1/num2;
printf("Div is = %.2lf\n",div);

}

void main(){

int i=1,n;
printf("Enter Two number :\n");
scanf("%d %d",&num1,&num2);

printf("Now enter your choise : \n");
while(i<5){
        scanf("%d",&n);
if(n==1){
    sumcalculator();
}
else if(n==2){
    subcalculator();
}
else if(n==3){
   mulcalculator();
}
else if(n==4){
    divcalculator();
}
else if(n==0){
    break;
}
i++;
}
}