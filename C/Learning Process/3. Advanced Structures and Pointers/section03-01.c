#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    /** Suppose we want to store some information about people, each person has a name and age **/

    struct Person {
        char name[10];
        double age;
    };

    struct Person p1; /// type var_name
    p1.age = 20;

    strcpy(p1.name, "p1 name");
    puts(p1.name);

    struct Person p2;
    p2.age = 30;
    strcpy(p2.name, "p2 name");
    puts(p2.name);

    return 0;
}
