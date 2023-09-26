//C program to read elements in two 3X3 matrix and print there addition.
#include<stdio.h>
#define row 3
#define col 3
int main(){
   int arr1[row][col], arr2[row][col],sum[row][col];
   printf("Enter the %d elements of arr1: ",row*col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    } 
    printf("Enter the %d elements of arr2: ",row*col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("Addition of 3X3 matrix are:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}