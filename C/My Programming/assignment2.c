#include <stdio.h>
#include <string.h>


int main(){
  char s1[100];
  char s2[100];
 
  printf("Enter a string: ");
  gets(s1);
  printf("Enter a substring: ");
  gets(s2);


  int i, j, l1, l2;
  int c = 0;
  int found = 0;

  l1 = strlen(s1);
  l2 = strlen(s2);

  for(i = 0; i < l1 - l2 + 1; i++) {
    found = 1;
    for(j = 0; j < l2; j++) {
      if(s1[i+j] != s2[j]) {
        found = 0;
        break;
      }
    }

    if(found) {
        printf("%d %d\n",i,i+strlen(s2));
      c++;
      i = i + l2 -1;
    }
  }

  printf("program occurrence count is: %d.\n", c);

  return 0;
}