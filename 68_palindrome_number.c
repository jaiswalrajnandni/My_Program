//C program to check paluindrome number
#include<stdio.h>

int main(){
    int n,n1,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
       rem = n%10;
       sum = sum*10+rem;
       n = n/10;
    }
    if(sum==n1)
       printf("Palindrome number");
    else
       printf("Not Palindrome number");   
    return 0;
}