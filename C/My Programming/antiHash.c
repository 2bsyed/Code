#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char cname[10];
    float grade;
} course;
typedef struct
{
    char name[25];
    float age;
    course course[2];
} std;

void fillarr(std s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("---------------------------------\n");
        printf("Enter Student name:\n");
        gets(s[i].name);
        printf("Enter age:\n");
        scanf("%f", &s[i].age);

        for (int i = 0; i < 2; i++)
        {
            fflush(stdin);
            printf("Enter Course %d name:\n", i + 1);
            gets(s[i].course[i].cname);
            printf("Enter Course grade:\n");
            scanf("%f", &s[i].course[i].grade);
        }
        system("cls");
    }
}

void printarr(std s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("---------------------------------\n");
        printf(" Student name:\n");
        puts(s[i].name);
        printf("age:\n");
        printf("%f\n", s[i].age);
        for (int i = 0; i < 2; i++)
        {
            printf("Course %d name\n", i + 1);
            puts(s[i].course[i].cname);
            printf("Course grade:\n");
            printf("%f", s[i].course[i].grade);
        }
    }
}

void main()
{
    std s[3];
    fillarr(s, 3);
    printarr(s, 3);
}