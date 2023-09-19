#include<stdio.h>

//C program to find sum of first n natural numbers
int main(){
    int n,sum=0;
    printf("Enter the last nutural number you want the sum of: ");
    scanf("%d",&n);
    //Runs in Linear time
    /*for(int i=1; i<=n; i++){
        sum +=i;
    }*/

    //Runs in Constant time
    sum=(n*n+n)/2;
    printf("Sum of %d natural number = %d ",n,sum);
    return 0;
}