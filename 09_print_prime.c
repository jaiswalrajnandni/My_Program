//C program to print prime numbers in a given range
#include<stdio.h>
int isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
           return 0;
    }       
    return 1;       
}
int main(){
    int n1,n2;
    printf("Enter First Number: ");
    scanf("%d",&n1);
    printf("\nEnter Second Number: ");
    scanf("%d",&n2);
    printf("\nThe Prime number between %d and %d are: ",n1,n2);
    for (int i=n1; i <=n2; i++)
    {
        if(isPrime(i))
           printf("%d ",i);
    }
    
    return 0;
}