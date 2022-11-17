/**
• Define a structure type for student containing
- name
- id
- grades for 3 courses

• Define a variable of type student and initialize its members
**/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[10];
    double grades[3];
}student;

void fillStudent(student *s1) { /// s1 ---> s1
    scanf("%d %s %lf %lf %lf", &s1->id, s1->name, &s1->grades[0], &s1->grades[1], &s1->grades[2]);
}

int main() {

    student s1 = {};
    fillStudent(&s1);
    printf("%d %s %lf %lf %lf", s1.id, s1.name, s1.grades[0], s1.grades[1], s1.grades[2]);
    return 0;
}
