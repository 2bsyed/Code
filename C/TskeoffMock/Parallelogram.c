#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    int x1,y1,x2,y2,x3,y3;
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        int b,h,x4,y4,area;
        b=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        x4=(x1+x3)/2;
        y4=(y1+y3)/2;
        h=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
        area=2*b*h;
        printf("%d\n",area);
    }
    return 0;
}