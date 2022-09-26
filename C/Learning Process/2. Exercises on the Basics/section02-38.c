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

int stringOcc(char str1[], char str2[]) {
    int count = 0;

    int j = 0;
    for(int i = 0; i < strlen(str1); i++)
        if (startsWith(&str1[i], str2)) {
            count++;
            printf("Occ %d is at %d\n", ++j, i);
        }

    return count;
}
int main() {
    char str1[] = "Hello World Hello Hello!"; /// 0, 12, 18
    char str2[] = "Hello";

    printf("%d", stringOcc(str1, str2));
    return 0;
}
