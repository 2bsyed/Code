#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

}
typedef struct{
    char name[6];
    int credit;
}courses;
typedef struct {
    char name[4];
    int courseNo;
    courses course[100];


}class;
void input(class *c){
    class n= *c;
    gets(n.name);
    scanf("%d",&n.courseNo);
    for(int i=0;i<n.courseNo;i++){
        gets(n.course[i].name);
        scanf("%d",&n.course[i].credit);
    }
    
}