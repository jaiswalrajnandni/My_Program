#include<stdio.h>
void main(){
    int i,j,lines;
    printf("Enter the number of lines: ");
    scanf("%d",&lines);
    for(i=1; i<=lines; i++){
        for(j=1; j<=lines; j++){
            if(j==i || j==lines+1-i)
               printf("*");
            else
               printf(" ");   
        }
        printf("\n");
    }
}