#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void removeSpaces(char str[]) {
    int strLength = strlen(str);
    char removed[strLength + 1];
    int j = 0;

    for(int i = 0; i < strLength; i++)
        if (str[i] == ' ')
            continue;
        else
            removed[j++] = str[i];

    removed[j] = '\0';
    strcpy(str, removed);
}

void reverseString(char str[]) {
    char reverse[strlen(str) + 1];
    for(int i = strlen(str) - 1, j = 0 ; i >= 0; i--, j++)
        reverse[j] = str[i];
    reverse[strlen(str)] = '\0';

    strcpy(str, reverse);
}

int isPalindrome(char str[]) {
    char reverse[strlen(str) + 1];

    strcpy(reverse, str);
    removeSpaces(reverse);
    removeSpaces(str);

    reverseString(reverse);

    return !strcmp(str, reverse);
}
int main() {
    char str[] = "abba";


    printf("%d",isPalindrome(str));
    return 0;
}








