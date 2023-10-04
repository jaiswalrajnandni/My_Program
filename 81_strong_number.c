//C program to check a given number is strong number.
#include<stdio.h>
int fact(int rem){
    int f=1;
    for(int i=1; i<=rem; i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        rem = n%10;
        int fa= fact(rem);
        sum = sum+fa;
        n = n/10;
    }
    if(sum == temp)
       printf("Number is Strong.");
    else
        printf("Number is not Strong.");   
    return 0;
}