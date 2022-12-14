#include<stdio.h>
#include<conio.h>
struct student
{
    char name[100];
    int roll;
    float marks[10];
};
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
int main()
{
    struct student s[50];
    int stu,cor;
    printf("Enter Total students:\n");
    scanf("%d",&stu);
    printf("Enter Total course:\n");
    scanf("%d",&cor);
    for(int i=0;i<stu;i++){    
        printf("-------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------\n");
    printf("Enter name of student:\n");
    scanf("%s",s[i].name);
    printf("Enter roll no:\n");
    scanf("%d",&s[i].roll);
    
    for (int j=0;j<cor;j++){
        printf("Enter course %d marks:\n",j+1);
    scanf("%f",&s[i].marks[j]);
    }
    
    }


for (int i=0;i<stu;i++){

printf("-------------------------------------------------------------------------------\n");
printf("-------------------------------------------------------------------------------\n");
    printf("Name:%s\n",s[i].name);
    printf("Roll no:%d\n",s[i].roll);
    
    for (int j=0;j<cor;j++){
            printf("Course %d Marks:%.2f\n",(j+1),s[i].marks[j]);
            printf("CGPA:%.2f\n",grade(s[i].marks[j]));
            
    }
}

getch();
return 0;
}

