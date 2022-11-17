#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int x;
        scanf("%d",&x);
        for(int j=0;j<n;j++){
            x-=(h[j+1]-h[j]);
            printf("%d",x);
            if(x<0){
                printf("No way Home\n");
                break;
            }
        }
        if(x>=0){
            printf("Homecoming\n");
        }
    }
}