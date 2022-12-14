#include<stdio.h>
int dev(int x){
    
	int i,count=0;;
	
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			count++;
		}
	}
	
	return count;

}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t,sum=0;
        float avg;
        int h;
        scanf("%d",&t);
        for(int j=0;j<t;t++){ 
            scanf("%d",&h);
            sum+=dev(h);
        }
        avg=(float)sum/t;
        printf("Case %d: %.4f\n",i,avg);
    }
}