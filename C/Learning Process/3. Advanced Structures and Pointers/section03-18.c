#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello World!";
    char *p = str;

    /// str ---> 'H' , wrong: str++, str = &c
    /// p ---> 'H'

    for(int i = 0; i < 12; i++)
        printf("%c", str[i]);
    printf("\n");

    for(int i = 0; i < 12; i++)
        printf("%c", p[i]);
    printf("\n");

    for(int i = 0; i < 12; i++)
        printf("%c", *(str + i));
    printf("\n");

    for(int i = 0; i < 12; i++)
        printf("%c", *(p + i));
    printf("\n");

    for(int i = 0; i < 12; i++)
        printf("%c", *p++);
    printf("\n");
    return 0;
}
