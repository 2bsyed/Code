#include<stdio.h>
typedef struct{
    char name[35];
}name;
int main(){
    name name[10];
    for(int i=0;i<10;i++){
        scanf("%s",name[i].name);

    }
    for(int i=0;i<10;i++){
        if(i==2||i==6||i==8){
            printf("%s\n",name[i].name);
        }
    }
    return 0;
}