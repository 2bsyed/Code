#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]) {
    printf("hello in strlen\n");
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}

void strcpy(char destination[], char source[]) {
    printf("hello\n");
    for(int i = 0; i < strlen(source); i++)
        destination[i] = source[i];
    destination[strlen(source)] = '\0';
}
int main() {
    char str[] = "12345678910";
    char copy[10] = {};
    strcpy(copy, str); /// 12345678\0''''''
    puts(copy);
    return 0;
}
