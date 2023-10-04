//C program to print hollow Rhombus star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row: ");
     scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n*2)-1; j++){
            if((i==1 && j>=n)||(i==n && j<=n)||(j==(n+1)-i || j==(n*2+1)-i))
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}