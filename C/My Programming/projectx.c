#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,swh,k=1;
float wc,oc;
struct{
    char name[25];
    int id;
    int wh;
    float pay;
}worker[1000];

void search();
void entry();
void results();
void sresults(int ret);
void edit(int id);
void mainmenu();


void mainmenu(){
    char op;
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|                                                                                         |\n");
    printf("|                                        PADMA GARMENTS                                   |\n");
    printf("|                                                                                         |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|    Search(s)     Entry(e)      Results(r)     Exit(x)                                   |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    fflush(stdin);
    scanf("%c", &op);
    system("cls");
    switch (op)
    {
    case 's':
        search();
        break;
    case 'e':
        entry();
        break;
    case 'r':
        results();
        break;
    case 'x':
        k=0;
        break;
    }

}
void entry(){
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                Total Workers         : ");
    scanf("%d",&n);
    printf("\n");
    printf("                Standard Work Hours   : ");
    scanf("%d",&swh);
    printf("\n");
    printf("                Per Standard Hour Cost: ");
    scanf("%f",&wc);
    printf("\n");
    printf("                Per Overtime Hour Cost: ");
    scanf("%d",&oc);
    printf("\n");
    printf("-------------------------------------------------------------------------------------------\n");
    system("cls");
    
    for(int i=0;i<n;i++){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("               Name:");
        fflush(stdin);
        scanf("%[^\n]",worker[i].name);
        printf("\n");
        printf("               ID  :");
        scanf("%d",&worker[i].id);
        printf("\n");
        printf("               WH  :");
        scanf("%d",&worker[i].wh);
        printf("\n");
        
        
        printf("-------------------------------------------------------------------------------------------\n");
        system("cls");
    }
    
}
void search(){
    int ser_id,ret=1000;
    printf("-------------------------------------------------------------------------------------------\n");
    printf("               ID:");
    scanf("%d",&ser_id);
    printf("\n");
    for(int i=0;i<50;i++){
        if(worker[i].id==ser_id){
            ret=i;
            break;
        }
    }
    system("cls");
    if(ret==1000){
    printf("Not Found!\n");
    system("pause");
    system("cls");
    }
    else
    sresults(ret);
    
}
void sresults(int ret){
   int total=0;
   float avg;
    
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                    %s                                                                     \n",worker[ret].name);
    printf("                    %d                                                                     \n",worker[ret].id);
    worker[ret].pay=(1.00*worker[ret].wh*wc);
        if(worker[ret].wh>swh)
        worker[ret].pay+=((1.00*worker[ret].wh-swh)*(oc-wc));
    printf("                    %.2f                                                                     \n",worker[ret].pay);
    printf("                    %d                                                                     \n",worker[ret].wh);
    printf("                    %d                                                                     \n",worker[ret].wh-swh);
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|   Search(s)  Edit(e)   Delete(d)  Exit(x)                                               |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    char op;
    fflush(stdin);
    scanf("%c",&op);
    
    switch(op){
        case 's':
        system("cls");
        search();
        break;
        case 'e':
        system("cls");
        edit(ret);
        break;
        case 'x':
        system("cls");
        mainmenu();
        break;
        case 'd':
        worker[ret].id=0;
        break;

    }
    system("cls");
}
void edit(int id){
    printf("-------------------------------------------------------------------------------------------\n");
        printf("               Name:");
        fflush(stdin);
        scanf("%[^\n]",worker[id].name);
        printf("\n");
        printf("               ID  :");
        scanf("%d",&worker[id].id);
        printf("\n");
        printf("               WH  :");
        scanf("%d",&worker[id].wh);
        printf("\n");
        printf("-------------------------------------------------------------------------------------------\n");
        system("cls");

    }
    
void results(){
    float sum=0;
    for(int i=0;i<n;i++){
        if(worker[i].id==0)
        continue;
        printf("-------------------------------------------------------------------------------------------\n");
        printf("                %s\n",worker[i].name);
        printf("                %d\n",worker[i].id);
        printf("                %d\n",worker[i].wh);
        printf("                %d\n",worker[i].wh-swh);
        worker[i].pay=(1.00*worker[i].wh*wc);
        if(worker[i].wh>swh)
        worker[i].pay+=((1.00*worker[i].wh-swh)*(oc-wc));
        printf("                %.2f\n",worker[i].pay);

        sum+=worker[i].pay;
    
    
    }
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                %.2f\n",sum);
    printf("|                                       Exit(x)                                           |\n");
    char op;
    fflush(stdin);
    scanf("%c",&op);
    
    switch(op){
        
        case 'x':
        system("cls");
        mainmenu();
        break;
    }
    //system("pause");
    
}


int main(){
    while(k==1)
    mainmenu();
}
