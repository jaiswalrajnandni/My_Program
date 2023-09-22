//C program to reverse a string
#include<stdio.h>

int main(){
    char s[10],temp;
    printf("Enter a string you want to reverse= ");
    scanf("%s",&s);
    int len=0;
    while(s[len]!='\0')
        len++;
    printf("The length of this string is %d\n",len);
    for(int i=0; i<=(len-1)/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }    
    printf("String is:%s",s);
    return 0;
}