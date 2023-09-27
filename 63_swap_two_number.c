//C program to swap to number without using a third variable.
#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter first Number: ");
    scanf("%d",&n1);
    printf("Printf second Number: ");
    scanf("%d",&n2);

    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("After Swapping number: \nn1=%d\n n2=%d",n1,n2);
    return 0;
}