//C program to generate fibonacci triangle
#include<stdio.h>

int main(){
    int line,a,b,c;
    printf("Enter the line: ");
    scanf("%d",&line);
    for(int i=1; i<=line; i++){
        a=0;
        b=1;
        printf("%d\t",b);
        for(int j=1; j<i; j++){
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}