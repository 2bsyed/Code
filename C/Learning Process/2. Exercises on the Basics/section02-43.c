#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[]) {
    for(int i = 0, j = strlen(str) - 1; i < j; i++, j--)
        if(str[i] == str[j])
            continue;
        else return 0;

    return 1;
}
int main() {
    /// ab   cba
    printf("%d", isPalindrome("y ab ba y"));
    return 0;
}
