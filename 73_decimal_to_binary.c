//C program to convert decimal number to binary.
#include<stdio.h>

int main(){
    int n,arr[10];
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=0;
    while(n > 0){
        arr[i] = n%2;
        n =  n/2;
        i++;
    }  
    printf("Decimal to binary = "); 
    for(int j=i-1; j>=0; j--)
        printf("%d",arr[j]);
    return 0;
}