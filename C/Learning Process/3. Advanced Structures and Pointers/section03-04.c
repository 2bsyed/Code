#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    typedef struct {
        char name[10];
        double age;
    }person;

    person people[3]; /// people[i].name, people[i].age

    for(int i = 0; i < 3; i++) {
        printf("enter name %d : ", i+1);
        fflush(stdin);
        gets(people[i].name);
        printf("enter age %d: ", i+1);
        scanf("%lf", &people[i].age);
    }

    for(int i = 0; i < 3; i++)
        printf("%s %lf\n", people[i].name, people[i].age);

    return 0;
}
