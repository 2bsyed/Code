#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringOcc(char str1[], char str2[]) {
    int count = 0;
    int foundOcc = 1;


    for(int i = 0; i < strlen(str1); i++) {
        foundOcc = 1;
        for(int j = i, k = 0; k < strlen(str2); j++, k++)
            if (str1[j] == str2[k])
                continue;
            else {
                foundOcc = 0;
                break;
            }

        if (foundOcc) {
            static int j = 1; /// 3
            count++;
            printf("Occ %d is at %d\n", j++, i);
        }
    }

    return count;
}

int main() {
    char str1[] = "hello hellohellohello bye";
    char str2[] = "hello";

    printf("%d", stringOcc(str1, str2));
    return 0;
}
