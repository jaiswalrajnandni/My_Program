//C program to convert decimal number to binary number
#include<stdio.h>

int main(){
    int n,rem,a[10];
    printf("Enter the number you want to print decimal: ");
    scanf("%d",&n);
    int i=0;
    while(n){
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    for(int j= i-1; j >= 0; j--){
        printf("%d", a[j]);
    }
    return 0;
}