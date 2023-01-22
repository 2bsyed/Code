//4b
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        int arr[t];
        for(int j=0;j<t;j++){
            scanf("%d",&arr[j]);
        }
        for(int j=t-1;j>=0;j--){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
}