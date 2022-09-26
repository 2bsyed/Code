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

int lastIndexOf(char str[], char search[]) {
    int lengthStr = strlen(str);

    for(int i = lengthStr - 1; i >= 0; i--)
        if (startsWith(&str[i], search)) return i;

    return -1;
}

int main() {
    char str[] = "012yuello World! gello";
    printf("%d", lastIndexOf(str,"Hello"));
    return 0;
}
