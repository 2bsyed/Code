#include<stdio.h>
int main(){
    int x, y;
    int max, min, sum = 0;
    scanf("%d %d", &x, &y);
    max = (x > y) ? x : y;
    min = (y < x) ? y : x;
    for(;min<=max;min++){
        if(min%13!=0){
            sum+=min;
        }
    }
    printf("%d\n",sum);
    return 0;
}