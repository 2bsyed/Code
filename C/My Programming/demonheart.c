#include<stdio.h>
int main(){
    int j,n,max=0,min=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    min=arr[0];
   int c=0;
   for(int i=0;i<n;i++){

    for(j=0;j<n;j++){
        if(arr[j]<=c)
        continue;
        min=(min<arr[j])?min:arr[j];
    }
    
    temp[i]=min;
    c=min;
   }
   for(int i=0;i<n;i++)
   printf(" %d",temp[i]);
}