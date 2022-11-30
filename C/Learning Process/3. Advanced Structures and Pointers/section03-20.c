/**
� strcpy(s1, s2) � copies s2 into s1 (including �\0� as last char)
� strncpy(s1, s2, n) � same but only copies up to n chars of s2
� strcmp(s1, s2) � returns a negative int if s1 < s2, 0 if s1 == s2 and a positive int if s1 > s2
� strncmp(s1, s2, n) � same but only compares up to n chars

� strcat(s1, s2) � concatenates s2 onto s1 (this changes s1, but not s2)
� strncat(s1, s2, n) � same but only concatenates up to n chars

� strlen(s1) � returns the length of s1
� strchr(s1, ch) � return a pointer to the first occurrence of ch in s1 (or NULL if ch is
not present)
� strrchr(s1, ch) � same but the pointer points to the last occurrence of ch
� strpbrk(s1, s2) � return a pointer to the first occurrence of any character in s1
that matches a character in s2 (or NULL if none are present)
� strstr(s1, s2) � substring, return a pointer to the char in s1 that starts a substring
that matches s2, or NULL if the substring is not present
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[] = "123abc123";
    char s2[] = "abc";

    char *p = strstr(s1, s2);
    if(p == NULL) printf("null");
    puts(p);


    return 0;
}
