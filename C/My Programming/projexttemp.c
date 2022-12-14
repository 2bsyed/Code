#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//data initialization
struct
{
    char name[10];

} course[10];



struct
{
    char name[25];
    int id;
    float marks[10];
} stu[50];



int p,n,k=1;
//
//function declear
void search();
void insert();
void results();
float grade(float x);
void sresults(int ser_id);
void edit(int id);
void mainmenu();
//functions
void mainmenu()
{
    char op;
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|                                                                                         |\n");
    printf("|                                        WELCOME                                          |\n");
    printf("|                                                                                         |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|    Search(s)     Insert(i)      Results(r)     Exit(x)                                  |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    fflush(stdin);
    scanf("%c", &op);
    system("cls");
    switch (op)
    {
    case 's':
        search();
        break;
    case 'i':
        insert();
        break;
    case 'r':
        results();
        break;
    case 'x':
        k=0;
        break;
    }

}
//
void search(){
    int ser_id,ret=100;
    printf("-------------------------------------------------------------------------------------------\n");
    printf("               ID:");
    scanf("%d",&ser_id);
    printf("\n");
    for(int i=0;i<50;i++){
        if(stu[i].id==ser_id){
            ret=i;
            break;
        }
    }
    system("cls");
    if(ret==100){
    printf("Not Found!\n");
    system("pause");
    system("cls");
    }
    else
    sresults(ret);
    
}
//
void sresults(int ret){
   int total=0;
   float avg;
    
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                    %s                                                                     \n",stu[ret].name);
    printf("                    %d                                                                     \n",stu[ret].id);
    for(int i=0;i<p;i++){
        printf("    %s    ",course[i].name);
        printf(" %f",stu[ret].marks[i]);
        total+=stu[ret].marks[i];
        printf("  %f\n",grade(stu[ret].marks[i]));

    }
    avg=(total*1.00)/(p*1.00);
    printf(" Avarage:%.2f  CGPA:%.2f\n",avg,grade(avg));
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
        stu[ret].id=0;
        break;

    }
    system("cls");
}
//
float grade(float x){
    float cg;
    if(x>=80)
    cg=4.00;
    else if(x>=75)
    cg=3.75;
    else if(x>=70)
    cg=3.50;
    else if(x>=65)
    cg=3.25;
    else if(x>=60)
    cg=3.00;
    else if(x>=55)
    cg=2.75;
    else if(x>=50)
    cg=2.50;
    else if(x>=45)
    cg=2.25;
    else if(x>=40)
    cg=2.00;
    else
    cg=0.00;

    return cg;
}
//
void edit(int id){
    printf("-------------------------------------------------------------------------------------------\n");
        printf("               Name:");
        fflush(stdin);
        scanf("%[^\n]",stu[id].name);
        printf("\n");
        printf("               ID  :");
        scanf("%d",&stu[id].id);
        printf("\n");
        printf("-------------------------------------------------------------------------------------------\n");
        for(int j=0;j<p;j++){
            printf("            %s:",course[j].name);
            scanf("%f",&stu[id].marks[j]);
            printf("\n");

        }
        printf("-------------------------------------------------------------------------------------------\n");
        system("cls");

    }

//
void insert(){
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                  Total students: ");
    scanf("%d",&n);
    printf("\n");
    printf("                  Total Course  : ");
    scanf("%d",&p);
    printf("\n");
    printf("-------------------------------------------------------------------------------------------\n");
    system("cls");
    printf("-------------------------------------------------------------------------------------------\n");
    for(int i=0;i<p;i++){
        printf("Course %d name :",i+1);
        fflush(stdin);
        scanf("%[^\n]",course[i].name);
        printf("\n");
    }
    printf("-------------------------------------------------------------------------------------------\n");
    system("cls");
    for(int i=0;i<n;i++){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("               Name:");
        fflush(stdin);
        scanf("%[^\n]",stu[i].name);
        printf("\n");
        printf("               ID  :");
        scanf("%d",&stu[i].id);
        printf("\n");
        printf("-------------------------------------------------------------------------------------------\n");
        for(int j=0;j<p;j++){
            printf("            %s:",course[j].name);
            scanf("%f",&stu[i].marks[j]);
            printf("\n");

        }
        printf("-------------------------------------------------------------------------------------------\n");
        system("cls");
    }
    
}

void results(){
    float max=0,min=100;
    int maxid,minid;

    for(int i=0;i<n;i++){
        float sum=0,avg;
        if(stu[i].id==0)
        continue;
        printf("-------------------------------------------------------------------------------------------\n");
        printf("                %s\n",stu[i].name);
        printf("                %d\n",stu[i].id);
        for(int j=0;j<p;j++){
            printf("  %s       %.2f        %.2f\n",course[j].name,stu[i].marks[j],grade(stu[i].marks[j]));
            sum+=stu[i].marks[j];
        }
        avg=sum/p;
        printf("Avarage:%.2f                  CGPA:%.2f       \n",avg,grade(avg));
        printf("-------------------------------------------------------------------------------------------\n");
        if(avg>max){
            max=avg;
            maxid=i;
        }
        if(avg<min){
            min=avg;
            minid=i;
        }

    }
    printf("|        Max(M)        Min(m)           Exit(x)                                           |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    char op;
    fflush(stdin);
    scanf("%c",&op);
    
    switch(op){
        case 'M':
        system("cls");
        printf("MAX\n");
        sresults(maxid);
        break;
        case 'm':
        system("cls");
        printf("min\n");
        sresults(minid);
        break;
        case 'x':
        system("cls");
        mainmenu();
        break;
    }
    //system("cls");
    
}

int main(){
    while(k==1)
    mainmenu();
}