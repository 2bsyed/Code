#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    double age;
}person;

void printPerson(const person *p) { /// p ---> p1 is safe
    printf("name: %s, age: %lf", p->name, p->age);
}

int main() {
    person p1 = {"Ali", 20};
    printPerson(&p1); /// 100

    /** const and pointers **/
    int num = 7;
    int i = 9;
    const int * const p = &num;
    num = 8;
    printf("%d", num);


    return 0;
}
