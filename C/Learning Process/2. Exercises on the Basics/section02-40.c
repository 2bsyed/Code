#include <stdio.h>
#include <stdlib.h>

//int indexOf(char str[], char search[]) {
//    int found = 1;
//    int lengthStr = strlen(str);
//    int lengthSearch = strlen(search);
//
//    for(int i = 0; i < lengthStr; i++) {
//        found = 1;
//        for(int j = i, k = 0; k < lengthSearch; j++, k++)
//            if (str[j] == search[k])
//                continue;
//            else {
//                found = 0;
//                break;
//            }
//
//        if (found) return i;
//    }
//
//    return -1;
//}


int startsWith(char str1[], char str2[]) {
    for(int i = 0; i < strlen(str2); i++)
        if (str1[i] == str2[i])
            continue;
        else return 0;

    return 1;
}

int indexOf(char str[], char search[]) {
    int lengthStr = strlen(str);

    for(int i = 0; i < lengthStr; i++)
        if (startsWith(&str[i], search)) return i;

    return -1;
}
int main() {
    char str[] = "012yHello World! Hello";
    printf("%d", indexOf(str,"Hello"));
    return 0;
}
