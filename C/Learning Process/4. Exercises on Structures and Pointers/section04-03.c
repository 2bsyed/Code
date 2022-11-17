/**
• addr1 and addr2 are pointers pointing to real numbers (floating numbers)
- content of addr1 is -45.78
- content of addr2 is 678.89

• write a program that displays the
values of addr1, addr2 and their contents

**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    double d1 = -45.78, d2 = 678.89;
    double *addr1 = &d1, *addr2 = &d2;

    printf("%p %p\n", addr1, addr2);
    printf("%lf %lf\n", *addr1, *addr2);
    return 0;
}
