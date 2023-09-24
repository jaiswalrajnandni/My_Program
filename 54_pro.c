#include<stdio.h>
#define size 8
int main(){
    int arr[size], arr1[size],k=0;
    printf("Enter the elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            arr1[k]=0;
            k++;
        }
        else{
            printf("%d ",arr[i]);
        }
    }    
    for(int i=0; i<k; i++)
        printf("%d ",arr1[i]);
    return 0;
}