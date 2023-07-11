#include <stdio.h>
#include <string.h>

int main()
{
   char str[] = "Hello world"; // initialzing a char array

   printf("The string is : %s\n", str); // printing the actual array

   strrev(str); // reversing the char array

   printf("The string after using function strrev() is : %s\n", str); // printing the reversed array
   return 0;
}
