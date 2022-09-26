#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    double age;
}person;

void makePerson(person * p) { /// p ---> p1
    printf("enter your name: ");
    scanf("%s", (*p).name );

    printf("enter your age: ");
    scanf("%lf", &p->age);
}

void printPerson(person p) {
    printf("name: %s, age: %lf", p.name, p.age);
}
int main() {
    person p1; /// 100
    makePerson(&p1);
    printPerson(p1);
    return 0;
}
