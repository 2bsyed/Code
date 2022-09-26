#include <stdio.h>
#include <stdlib.h>
#include <string.h> /// use string functions
#include <ctype.h> /// use character functions

int main() {

    char firstName[] = {"Ali"}; /// 'A' 'l' 'i' '\0' , size = 4
    char lastName[] = "Badran"; /// 'B' 'a' 'd' 'r' 'a' 'n' '\0', size = 7 

    char str1[5]; /// ?????
    printf("garbage: %s\n",str1);

    char str2[4] = {}; /// '\0' '\0' '\0' '\0' '\0'
    printf("garbage: %s\n", str2);
    printf("%d %d %d %d\n\n",  (str2[0]=='\0'), (str2[1]=='\0'), (str2[2]=='\0'), (str2[3]=='\0'));

    printf("first name: %s\n",firstName);
    printf("first name length: %d\n",strlen(firstName));
    printf("first name bytes: %d\n\n", sizeof(firstName));

    printf("last name: %s\n",lastName);
    printf("last name length: %d\n",strlen(lastName));
    printf("last name bytes: %d\n\n", sizeof(lastName));

    char firstNameCopy[4] = {};
    /// char firstNameCopy[4] = firstName; // error
    strcpy(firstNameCopy,firstName); /// firstNameCopy = firstName
    printf("first name copy: %s\n\n",firstNameCopy);

    char fullName[strlen(firstName) + strlen(lastName) +1]; /// +1 for null-terminator
    strcpy(fullName,firstName);
    strcat(fullName,lastName);
    printf("full name: %s\n",fullName);
    printf("full name length: %d\n",strlen(fullName));
    printf("full name bytes: %d\n\n", sizeof(fullName));


    printf("firstName==firstNameCopy: %d\n", (strcmp(firstName,firstNameCopy)));
    printf("lastName==firstName: %d\n\n", (strcmp(lastName,firstName)));

    printf("a<b: %d\n", strcmp("a", "b"));
    printf("banana > apple: %d\n\n", strcmp("banana","apple"));

    printf("enter your full name: ");
    char str[20] = {};
//    scanf("%s",str);

    gets(str); // char by char
    puts(str);
//    printf("full name: %s\n",str);
    printf("full name length: %d\n",strlen(str));
    printf("full name bytes: %d\n\n", sizeof(str));

    /// character functions, 0 = false, true otherwise
    printf("h is a letter: %d\n",isalpha('h'));
    printf("1 is a letter: %d\n",isalpha('1'));

    printf("1 is a digit: %d\n",isdigit('1'));
    printf("h is a digit: %d\n",isdigit('h'));

    printf("1 is a digit or a letter: %d\n",isalnum('1'));
    printf("h is a digit or a letter: %d\n",isalnum('h'));

    printf("h is lower case: %d\n",islower('h'));
    printf("H is upper case: %d\n",isupper('H'));

    printf("H is %c in lower case\n",tolower('H'));


    printf("space: %d\n\n",isspace(' '));

    for (int i = 0 ; i < strlen(str);i++) /// going through every character in the string
        if (islower(str[i])) /// if it is a small case
            str[i] = toupper(str[i]); /// assign it to a upper case
    printf("%s",str);

    return 0;
}

/***
    Each C-String must end with a null-terminator '\0' , always remember to allocate a space for it
    strcpy(str1, str2); /// str1 = str2;
    strcat(str1, str2); /// add str2 to the end of str1, remember to allocate enough space
    strlen(str1); /// returns the length of the string (without counting the '\0')

    strcmp(str1, str2);
        returns -1 if str1 < str2 (alphabetically)
        returns 1 if str1 > str2 (alphabetically)
        returns 0 if str1 == str2
***/
