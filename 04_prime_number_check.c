//C program to find prime number
#include<stdio.h>

int main(){
    int n,isPrime=1;
    printf("Enter the number you want to check it is prime or not: ");
    scanf("%d",&n);
    for(int i=2; i*i < n; i++){
        if(n%i==0)
          isPrime=0;
    }
    if(isPrime)
      printf("The number %d is prime.\n",n);
    else
      printf("The number %d is not prime\n",n);  
    return 0;
}