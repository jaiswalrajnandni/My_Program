// C program to print the hollow mirrored right triangle star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==n)||(j==n)||(i==(n+1)-j))
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}