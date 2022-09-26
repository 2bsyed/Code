#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char str[]) {
    char reverse[strlen(str) + 1];
    for(int i = strlen(str) - 1, j = 0 ; i >= 0; i--, j++)
        reverse[j] = str[i]; // 10
    reverse[strlen(str)] = '\0';

    for(int i = 0; i < strlen(reverse); i++)
        str[i] = reverse[i];
}

void squeezSpaces(char str[]) {
    int strLength = strlen(str);
    char sqeezed[strLength];
    int j = 0;

    for(int i = 0; i < strLength; i++)
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        else
            sqeezed[j++] = str[i];

    sqeezed[j] = '\0';
    strcpy(str, sqeezed);
}

int main() {
    char str[] = "This  is   a   test!";
    squeezSpaces(str);
    reverseString(str);
    puts(str);
    return 0;
}
