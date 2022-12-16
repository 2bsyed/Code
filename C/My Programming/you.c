#include<stdio.h>
#include<string.h>
int main(){
    char s[10000];
    int count=0;
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='y')
            if(s[i+1]=='o')
                if(s[i+2]=='u')
                    count++;
    }
    printf("%d",count);
}