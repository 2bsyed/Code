#include<stdio.h>
int main(){
    int t,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&k);
            for(int j=0;j<k;j++){
                int op;
                scanf("%d",&op);
                switch(op){
                    case 1:
                    printf("Rolien\n");
                    break;
                    case 2:
                    printf("Naej\n");
                    break;
                    case 3:
                    printf("Elehcim\n");
                    break;
                    case 4:
                    printf("Odranoel\n");
                    break;
                }
            }
        }
    }
