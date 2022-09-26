#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int startsWith(char str1[], char str2[]) {
    for(int i = 0; i < strlen(str2); i++)
        if (str1[i] == str2[i])
            continue;
        else return 0;

    return 1;
}
int main() {
    char str1[] = "Hello World!";
    char str2[] = "Helloo";

    printf((startsWith(str1, str2)) ? "yes" : "no");
    return 0;
}
