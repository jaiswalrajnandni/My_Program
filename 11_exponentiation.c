//C program to calculate power of a number
#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the number you want to power: ");
    scanf("%d",&m);
    printf("Enter the power of number: ");
    scanf("%d",&n);
    long long int val=1;
    for(int i=0; i<n; i++){
        val = val*m;
    }
    printf("The value of %d to the power %d = %lld",m,n,val);
    return 0;
}