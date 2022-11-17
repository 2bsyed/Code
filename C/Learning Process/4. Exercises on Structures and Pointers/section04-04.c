/**
write a program which exchanges
the memories pointed to by two pointers of
type char.

p1 --> c1
p2 --> c2

then we want:
p1 --> c2;
p2 --> c1;

**/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1 = 'a';
    char c2 = 'b';

    char *p1 = &c1; /// 100, 200
    char *p2 = &c2; /// 200, 100

    char *temp = p1; /// 100
    p1 = p2;
    p2 = temp;

    printf("%c %c", *p1, *p2);
    return 0;
}
