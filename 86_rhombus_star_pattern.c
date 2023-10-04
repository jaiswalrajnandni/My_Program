//C program to print Rhombus star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row: ");
     scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n*2)-1; j++){
            if(j>=(n+1)-i && j<=(n*2)-i)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}