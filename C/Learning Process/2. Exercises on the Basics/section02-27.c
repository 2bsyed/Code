/**
Read the user's name and say Hi to him
**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter your full name: ");

    char name[20] = {};
//    scanf("%s", name); /// first last
    gets(name);
//    printf("Hi %s", name);
    puts(name);
    return 0;
}
