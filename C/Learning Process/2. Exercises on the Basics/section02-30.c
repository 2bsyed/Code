#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}

int main() {

    printf("%d",strlen("")); // 0
    printf("%d",strlen("Ali")); // 3
    printf("%d",strlen("Badran"));
    printf("%d",strlen("Ali Badran"));

    return 0;
}
