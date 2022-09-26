#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char source[], char destination[]) {
    for(int i = 0; i < strlen(source); i++)
        destination[i] = source[i];
    destination[strlen(source)] = '\0';
}
int main() {
    char name[] = "Ali Badran";
    char copy[strlen(name) + 1];
    copyString(name, copy);
    printf("%d", strlen(copy));
//    puts(copy);

    return 0;
}
