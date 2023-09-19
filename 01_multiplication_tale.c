#include<stdio.h>

int main(){
    int num;
    printf("Enter the value of number whose multiplication table is to be printed: ");
    scanf("%d",&num);
    printf("The Multiplication table of %d is:\n",num);
    for(int i=1; i<=10; i++)
       printf("%d X %d = %d\n",num,i,num*i);
    return 0;
}