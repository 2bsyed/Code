#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hello(char * str) {
    str[0] = 'x';
    puts(str);
}
int main() {
    /// as we know: "char *str" is the same as "char str[]"
    char declaredStr[] = "hello";
    char *ptrStr;
    ptrStr = "hello";
    puts(ptrStr);
    char *other = "bye";

    hello(other);
    printf("%d\n", strlen(declaredStr));
    printf("%d\n", strlen(ptrStr));

    declaredStr[1] = 'x';
    ptrStr[1] = 'x' ; /// NOT ALLOWED !! -> USE pointer strings to make constant strings :)
    puts(declaredStr);
    puts(ptrStr);

//    declaredStr = other; /// NOT ALLOWED !!
    ptrStr = other;
    puts(ptrStr);

    char *longStr1 ="1-Hello "
                   "This String "
                   "is declared "
                   "on multiple lines!";

    char longStr2[] ="2-Hello "
                   "This String "
                   "is declared "
                   "on multiple lines!";
    puts(longStr1);
    puts(longStr2);

/**
- pointer strings can not be changed
- declared strings can be changed

- use pointer strings when:
    .making a constant string
    .passing strings to functions

- use declared strings normally in the body of your functions

- the = operator can be used only in initialization with declared strings
**/

    return 0;
}
