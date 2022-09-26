#include <stdio.h>
#include <stdlib.h>

int main() {
    char names[3][11];
    gets(names[0]);
    gets(names[1]);
    gets(names[2]);

    printf("\n");

    puts(names[0]);
    puts(names[1]);
    puts(names[2]);

    /**
    - all strings will be 11 chars long
    - requires 2 nested for-loops for most operations such as string
      comparison or string copying, which can become complicated

    **/
    return 0;
}
