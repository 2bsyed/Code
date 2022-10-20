#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (isalpha(c))
    {
        printf("Alphabet");
    }
    else if (isdigit(c))
    {
        printf("Digit");
    }
    else
    {
        printf("special");
    }
    return 0;
}