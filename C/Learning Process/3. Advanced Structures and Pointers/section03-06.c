#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    double grade;
}course;

typedef struct {
    char name[10];
    double age;
    course courses[2];
}std;

int main() {

    std s1;

    printf("enter your name: ");
    gets(s1.name);

    printf("enter your age: ");
    scanf("%lf", &s1.age);

    for(int i = 0; i < 2; i++) {
        printf("enter course %d name: ", i+1);
        fflush(stdin);
        gets(s1.courses[i].name);
        printf("enter course %d grade: ", i+1);
        scanf("%lf", &s1.courses[i].grade);
    }

    printf("%s %lf\n", s1.name, s1.age);
    printf("courses:\n");
    for(int i = 0; i < 2; i++)
        printf("%s %lf\n", s1.courses[i].name, s1.courses[i].grade);

    return 0;
}
