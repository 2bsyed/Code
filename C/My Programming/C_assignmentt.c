#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char student_name[12];
    int student_id;
    char department[25];
    int marks[2];
    }st;

int main()
{
    st s;
    int i=0, n=0, y=0, j=0, total=0;
    float avg=0, cg=0, x=0;

    printf("how many student to show result? :  ");
    scanf("%d",&y);


    for(j=0;j<y;j++){

    printf("Enter student %d name : ",j+1);
    scanf("%s",&s.student_name);
    printf("Enter student id: ");
    scanf("%d",&s.student_id);
    printf("Enter student department: ");
    scanf("%s",&s.department);
    printf("How many subjects? : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
      printf("Enter your subjects marks %d: ",i+1);
        scanf("%d",&s.marks[i]);
        total=total+s.marks[i];
        avg=(float)total/n;
    }

    printf("\n");
    printf("student_name: %s\n",s.student_name);
    printf("student_id: %d\n",s.student_id);
    printf("department: %s\n",s.department);
    printf("total matks: %d\n",total);
    printf("avarage marks: %f\n",avg);

    x = avg;
    if(x>=80)
    printf("cg=4.00");
    else if(x>=75)
    printf("cg=3.75");
    else if(x>=70)
    printf("cg=3.50");
    else if(x>=65)
    printf("cg=3.25");
    else if(x>=60)
    printf("cg=3.00");
    else if(x>=55)
    printf("cg=2.75");
    else if(x>=50)
    printf("cg=2.50");
    else if(x>=45)
    printf("cg=2.25");
    else if(x>=40)
    printf("cg=2.00");
    else
    printf("cg=0.00");

printf("%.2\n",cg);
printf("\n");


    }


   return 0;
}
