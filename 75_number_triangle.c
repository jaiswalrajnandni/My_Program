//C program to print number triangle
#include<stdio.h>

int main(){
    int k,r;
    printf("Enter the range: ");
    scanf("%d",&r);
    for(int i=1; i<=r; i++){
        k=1;
        for(int j=1; j<=(r*2)-1; j++){
            if(j>=(r+1)-i && j<=(r-1)+i){
               printf("%d",k);
               j<=(r-1)?k++:k--;
            }
            else
               printf(" ");   
        }
        printf("\n");
    }
    return 0;
}