//C program to print the fibonacci series using recursion or without using recursion
#include<stdio.h>
int Fibonacci(int num, int first, int second, int third){
    if(num>0){
        third = first+second;
        first = second;
        second = third;
        printf("%d ",third);
        Fibonacci(num-1, first, second, third);
    }
}
int main(){
    int num;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    printf("Fibonacci Serirs with Recursion:\n");
    printf("%d %d ",0,1);
    Fibonacci(num-2, 0, 1, 0);
    
    printf("\nFibonacci Series without Recursion:\n");
    int first=0, second=1, third=0;
    printf("%d %d ",0,1);
    for(int i=2; i<num; i++){
        third=first+second;
        printf("%d ",third);
        first = second;
        second = third;
}
    return 0;
}