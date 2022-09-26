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
int main() {
    char str[] = "This is a test";
    reverseString(str);
//    puts(str);
    printf("%d", str[strlen(str)] == '\0');
    return 0;
}
