#include <stdio.h>
#include <stdlib.h>

int main() {
    /** A pointer is a variable that holds the address of another variable
        Why do we use pointers? :
        - Make a function able to modify its arguments (Call By Reference)
        - Dynamic Allocation (A topic for later on)

        Declaring a pointer: type * var_name
    **/

    int *p1 = NULL; /// A pointer to an integer
    double *p2 = NULL; /// A pointer to a double
    char *p3 = NULL; /// A pointer to a character (Just like the name of a string)
    void *p4 = NULL; /// A pointer to anything (must be casted)

    printf("%p %p %p %p\n", p1, p2, p3, p4); /// Random addresses -> DANGEROUS

    int *p5 = NULL; /// A pointer to an integer pointing to nothing -> SAFE, so always initialize pointers to NULL
    printf("%s", p5);
    return 0;
}
