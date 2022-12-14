#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char student_name[12];
    int student_id;
    char department[25];
    int marks[6]
    }st;

int main()
{
    st s;
    int i,total=0; float avg;
    printf("Enter your name: ");
    scanf("%s",&s.student_name);
    printf("Enter your id: ");
    scanf("%d",&s.student_id);
    printf("Enter your department: ");
    scanf("%s",s.department);
    
    for(i=0;i<6;i++){
      printf("Enter your marks sub %d: ",i+1);
        scanf("%d",&s.marks[i]);
        total=total+s.marks[i];
        avg=(float)total/6;
    }
    printf("student_name: %s\n",s.student_name);
    printf("student_id: %d\n",s.student_id);
    printf("department: %s\n",s.department);
    printf("total matks: %d\n",total);
    printf("avarage marks: %f\n",avg);
float x=avg,cg;
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
printf("%.2\n",cg);
   return 0;
}
