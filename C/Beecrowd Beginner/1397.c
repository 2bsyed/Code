#include<stdio.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0)
        break;
        int a,b,aa=0,bb=0;
        for(int i=0;i<n;i++){
            
            scanf("%d %d",&a,&b);
            if(a>b)
            aa++;
            else if(b>a)
            bb++;
            
        }
        printf("%d %d\n",aa,bb);
    }
    return 0;
}