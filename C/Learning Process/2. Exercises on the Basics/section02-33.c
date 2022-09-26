#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void squeezSpaces(char str[]) {
    int strLength = strlen(str);
    char sqeezed[strLength + 1];
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
    char str[] = "star comedy by democrats!";
    squeezSpaces(str);
    puts(str);
    printf("%d", str[25] == '\0');
    return 0;
}
