//4c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[150];
    int fc=0,lc=0,sc=0;
    gets(s);
    if(s[0]==s[strlen(s)-1]){
        for(int i=0;i<strlen(s);i++){
            if(s[i]==' ')
            sc++;
        }
        printf("Total space: %d",sc);
    }
    else{
        for(int i=0;i<strlen(s);i++){
            if(s[i]==s[0])
            fc++;
            else if(s[i]==s[strlen(s)-1])
            lc++;
        }
        printf("First count : %d and Last count : %d",fc,lc);
    }
}