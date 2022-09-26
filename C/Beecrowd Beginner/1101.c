#include<stdio.h>
int main(){
    int x,y;
    while(1){
        int max, min, sum = 0;
    scanf("%d %d", &x, &y);
    if(x<=0||y<=0){
        break;
    }
    max = (x > y) ? x : y;
    min = (y < x) ? y : x;
    for(;min<=max;min++){
        printf("%d ",min);
        sum+=min;
    }
    printf("Sum=%d\n",sum);
    }
    return 0;
}