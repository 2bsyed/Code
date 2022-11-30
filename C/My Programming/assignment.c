#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 1024


int main(){
  char string[MAX_STRING_SIZE];
  char substring[MAX_STRING_SIZE];
 
  printf("Enter a string: ");
  gets(string);

  printf("Enter a substring: ");
  gets(substring);


  int i, j, l1, l2;
  int count = 0;
  int found = 0;

  l1 = strlen(string);
  l2 = strlen(substring);

  for(i = 0; i < l1 - l2 + 1; i++) {
    found = 1;
    for(j = 0; j < l2; j++) {
      if(string[i+j] != substring[j]) {
        found = 0;
        break;
      }
    }

    if(found) {
        printf("Starting string position :%d Ending string position :%d\n",i,i+strlen(substring));
      count++;
      i = i + l2 -1;
    }
  }

  printf("Substring occurrence count is: %d.\n", count);

  return 0;
}