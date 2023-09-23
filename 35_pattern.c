#include<stdio.h>
void main(){
    int i,j,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1; i<=row; i++){
        for(j=1; j<=(row*2)-1; j++){
            if(j>=i && j<=(row*2)-i)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}