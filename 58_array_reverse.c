//Reverse an array using recursion
#include<stdio.h>
#define size 5
void reverseArray(int arr[], int start, int end){
    int temp;
    if(start >= end)
       return;
    temp = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    reverseArray(arr, start+1, end-1);
}
void printArray(int arr[], int len){
     int i;
     for(i=0; i<size; i++)
         printf("%d ",arr[i]);
     printf("\n");    
}
int main(){
    int arr[size],len;
    len=size;
    printf("Enter the %d elements: ",size);
    for(int i=0; i<len; i++)
        scanf("%d",&arr[i]);
    reverseArray(arr,0, len-1);
    printf("Reverse Array is: ");
    printArray(arr,len);  
    return 0;
}