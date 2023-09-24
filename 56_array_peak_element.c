//C program to find peak element
#include<stdio.h>
#define size 5
int findPeak(int arr[], int n){
    if(n==1)
       return 0;
    if(arr[0] >= arr[1])
       return 0;   
    if(arr[n-1] >= arr[n-2])
       return n-1;
    for(int i=1; i<n-1; i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
          return i;
    }    
}
int main(){
    int arr[size];
    printf("Enter %d elements: ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
        //int n= sizeof(arr)/sizeof(arr[0]);
        printf("Index of peak pointis %d", findPeak(arr,size));
    return 0;
}