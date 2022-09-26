#include <stdio.h>
#include <stdlib.h>

int charOcc(char str[], char c) {
    int strLength = strlen(str);
    int count = 0;
    int found = 1;

    for(int i = 0; i < strLength; i++)
        if(str[i] == c) {
            count++;
            if (found) {
                printf("index: %d\n", i);
                found = 0;
            }
        }

    return count;
}
int main()
{
    printf("Occ: %d", charOcc("Hello World!", 'W'));
    return 0;
}
