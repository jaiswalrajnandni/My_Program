//Find the maximum element in the given array.
#include<stdio.h>
#define size 5
int main(){
    int arr[size],max=0;
    printf("Enter the %d elements: ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<size; i++){
        if(max<arr[i])
           max=arr[i];
    }    
    printf("Maximum value: %d ",max);
    return 0;
}