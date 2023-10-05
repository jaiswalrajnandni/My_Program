// C program to print the inverted mirrored right triangle star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>=i)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}