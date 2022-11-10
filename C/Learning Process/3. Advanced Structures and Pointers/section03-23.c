#include <stdio.h>
#include <stdlib.h>

int main() {
    /**
    � each pointer points to one string
    � follow the string through the pointer
    � go to the next string using one for-loop
    � because strcpy, strcmp, strlen all expect pointers, we can use these by
    passing an array element (since each array element is a pointer to a string)
    **/

    char *names[2] = { "name1" }; /// we can not edit
    for(int i = 0; i < 1; i++)
        printf("%d\n", strcmp(names[i], "hello"));
    return 0;
}
