#include<stdio.h>

void main(){
    int i,j,rows;
    printf("Enter the number of row: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=(rows*2)-1; j++){
            if(j>=i && j<=(rows*2)-i)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}