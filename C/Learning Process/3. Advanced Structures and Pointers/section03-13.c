#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    double age;
}person;

int main() {

    person p1;
    p1.age = 20;
    person *p = &p1;

    printf("%lf\n",(*p).age);
    printf("%lf", p->age);

    return 0;
}
