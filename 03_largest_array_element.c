//C program to find largest element in an array
#include<stdio.h>
int returnMax(int array[], int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main(){
    int arr[]= {1,12,3,54,5,67,654};
    int max = returnMax(arr,7);
    printf("The Maximum element in this array is %d",max);
    return 0;
}