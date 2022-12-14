#include<stdio.h>

struct stu
{
    int Roll;
    char Name[15];
    int marks[50];
};
int main()
{
struct stu s;
int i,n;
int total=0;
float avg;
printf("Enter Roll: ");
scanf("%d",&s.Roll);
printf("Enter Name: ");
scanf("%s",&s.Name);
printf("Enter total sub:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter Sub %d marks\n",i+1);
    scanf("%d",&s.marks[i]);
    total=total+s.marks[i];
    avg=(float)total/n;

}
printf("Roll:%d\n",s.Roll);
printf("Name:%s\n",s.Name);
printf("Total marks:%d\n",total);
printf("Avg:%f\n",avg);

return 0;
}
