#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int i1 = 0 ; /// declaration / initialization
    printf("i1=%d\n", i1);

    i1 = 5; /// assignment
    printf("i1=%d\n", i1);

    i1 = -3; /// good-bye 5
    printf("i1=%d\n", i1);

    i1 = 3.5; /// casting, 3.5 is converted to an integer 3
    printf("i1=%d\n\n", i1);

//    int i1 ; /// error we already declared i1

    double d1 = 3.5;
    printf("d1=%lf\n", d1);

    d1 = 0; /// casting, 0 is converted to a double 0.0
    printf("d1=%lf\n", d1);

    float f1 = 3.7;
    printf("f1=%f\n\n", f1);

    char c = 'A'; /// NOT "A", THIS IS A STRING
    printf("%c\n", c);

    c = 65; /// casting, Go see the ASCII table
    printf("%c\n", c);

    int code = 'A'; /// casting
    printf("%d\n\n", code);

    _Bool b = 0;
    printf("b=%d\n", b);

    b = 1;
    printf("b=%d\n", b);

    b = 2;
    printf("b=%d\n", b);

    b = -1;
    printf("b=%d\n", b);

    /// #include <stdbool.h> to use "true" and "false"
    b = false;
    printf("using keywords b=%d\n", b);
    b = true;
    printf("using keywords b=%d\n\n", b);

    char name[] = "Ali Badran"; /// group of characters
    printf("%s\n", name);


    /// how to know how much a variable can hold
    int x = sizeof (int);
    printf("number of bytes of an int: %d bytes\n", x);
    printf("number of bits: 4x8=32 bits\n");
    printf("we can store 2^32 in an integer"); /// 4294967296


    return 0;
}

/****
    int: ...,-3,-2,...,2,3... (negative and positive values)
        >> No decimal points

    float: 4.5, -2.5
        >> Decimal point

    double: 4.5, -2.5
        >> Decimal point
        >> More precise than float

    char: 'a' - '*' - ',' - '/'
        >> Check out the ASCII table
        >> Not "a", "*",... !!! THIS IS A STRING

    _Bool: 0 (false), 1 (true)
        >> 0 is false, everything else is true
        >> #include <stdbool.h> to use "true" and "false" keywords

    String (text): "Ali Badran", "Computer Science Academy",...
        >> There is no type called "String" in C
        >> Character Arrays
****/


