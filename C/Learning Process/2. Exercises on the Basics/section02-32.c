#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int strlen(char str[]) {

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}

int strcmp(char str1[], char str2[]) {
    for(int i = 0; i < strlen(str2); i++)
        if(str1[i] == str2[i])
            continue;
        else
            return (str1[i] > str2[i]) ? 1 : -1;
    return 0;
}

int main() {
    printf("%d\n", strcmp("abc", "abc"));
    printf("%d\n", strcmp("abc", "abcd"));
    printf("%d\n", strcmp("abcd", "abc"));
    return 0;
}
