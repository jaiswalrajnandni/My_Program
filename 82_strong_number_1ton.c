//C program to print the strong number from 1 to n.
#include<stdio.h>
int factorial(int rem){
    int f=1;
    for(int i=1; i<=rem; i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n,rem,fact=1,sum=0;
    printf("Enter a limit you want to strong number : ");
    scanf("%d",&n);
    printf("\nStrong numbers are: ");
    for(int i=1; i<=n; i++){
      int k = i;
      while(k != 0){
        rem = k%10;
        fact = factorial(rem);
        k = k/10;
        sum = sum+fact;
      }
      if(sum==i){
        printf("%d,",i);
      }
      sum=0;   
    }
    return 0;
}