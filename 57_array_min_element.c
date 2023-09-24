// Program to find the minimum element of an array
#include<stdio.h>
#define size 5
int main(){
    int arr[size],min;
    printf("Enter the %d elements: ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
        min = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<min)
           min=arr[i];
    }    
    printf("Minimum value: %d ",min);
    return 0;
}