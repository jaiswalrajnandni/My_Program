// C program to print the hollow inverted right triangle star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==1)||(j==1)||(j==(n+1)-i))
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}