#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int tr,sum=1000;
        scanf("%d",&tr);
        for(int j=0;j<tr;j++){
            fflush(stdin);
            int a;
            char c;
            scanf("%c %d",&c,&a);
            if(c=='+')
                sum+=a;
            else if(c=='-')
                sum-=a;
            
        }
        printf("Case %d: %d\n",i,sum);
    }
}
