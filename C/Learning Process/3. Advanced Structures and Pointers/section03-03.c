#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    typedef struct {
        char name[10];
        int age;
    }person;

    person p1 = {};
    printf("address of the structure: %d\n\n", &p1);
    printf("address of the name member (it is an array): %d\n", p1.name);
    printf("address of the age member: %d\n", &p1.age);
    printf("address of the age member: %d\n", &(p1.age));

    return 0;
}
