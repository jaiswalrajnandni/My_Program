//C program to count number of digits in an integer
#include<stdio.h>

int main(){
    int n,counter=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
      printf("There is only 1 digit in your number."); 
    else{   
    while (n!=0)
    {
        n =n/10;
        counter++;
    }
    printf("There are %d digit in your number.",counter);   
    }
    return 0;
}