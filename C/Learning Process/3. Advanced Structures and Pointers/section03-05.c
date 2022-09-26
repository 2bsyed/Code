#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    double age;
}person;

void fillArray(person arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("enter name %d : ", i+1);
        fflush(stdin);
        gets(arr[i].name);
        printf("enter age %d: ", i+1);
        scanf("%lf", &arr[i].age);
    }
}

void printArray(person arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%s %lf\n", arr[i].name, arr[i].age);
}
int main() {
    person people[2]; /// people[i].name, people[i].age

    fillArray(people, 2);
    printArray(people, 2);

    return 0;
}
