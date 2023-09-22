//C program to R3everse a number
#include<stdio.h>

int reverse(int num){
    int rev=0, rem;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    return rev;
}
int main(){
    int num,rev;
    printf("Enter a number you want to reverse: ");
    scanf("%d",&num);
    rev=reverse(num);
    printf("The reversed number is %d",rev);
    return 0;
}