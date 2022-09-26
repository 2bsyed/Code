/** Write a program which reads a sequence of real values filled by the user and stops by
displaying "done" when the sum of these values exceeds 100 **/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("enter numbers:\n");
    int n = 0;
    int sum = 0;

    for (; sum <= 100 ;) {
        scanf("%d", &n);
        sum += n;
        printf("sum=%d\n", sum);
    }

    printf("done");
    return 0;
}
