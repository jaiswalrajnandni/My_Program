//C program to print square star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=(n))
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}