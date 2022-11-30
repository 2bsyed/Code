#include<stdio.h>
int main(){
    int n;
    float sum=0;;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int c,a;
        scanf("%d %d",&c,&a);
        switch(c){
            case 1001:
            sum+=1.50*a;
            break;
            case 1002:
            sum+=2.50*a;
            break;
            case 1003:
            sum+=3.50*a;
            break;
            case 1004:
            sum+=4.50*a;
            break;
            case 1005:
            sum+=5.50*a;
            break;
            
        }
    }
    printf("%.2f\n",sum);
}