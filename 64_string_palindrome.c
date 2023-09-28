//C program to check whether a string is a palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char s[5],flag=1;
    printf("Enter the String: ");
    scanf("%s",s);
    int len;
    len=strlen(s);
    for(int i=0; i<len; i++){
        if(s[i] != s[(len-1)-i]){
            flag=0;
        }   
    }
    if(flag)
      printf("String is Palindrom");
    else
      printf("String is not Palindrom");  

    return 0;
}