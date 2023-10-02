// C program to print multiplication of 2 matrices.
#include<stdio.h>
int main(){
    int arr1[10][10],arr2[10][10],mul[10][10],row,col;
    printf("Enter the number of Row= ");
    scanf("%d",&row);
    printf("Enter the number of Column= ");
    scanf("%d",&col);
    printf("Enter First Matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Second Matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Multiplication of Matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mul[i][j]=0;
            for(int k=0; k<col; k++){
                mul[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",mul[i][j]);
        }
                printf("\n");
    }
    return 0;
}