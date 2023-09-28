//C program to determine wheter the given number is Armstrong or not
#include<stdio.h>
#include<math.h>

int main(){
    int n1,onum,r,result=0,n=0;
    printf("Enter the number: ");
    scanf("%d",&n1);
    onum=n1;
     while(onum != 0){
      onum = onum/10;
      ++n;
    }
    onum=n1;
    while(onum != 0){
    r = onum%10;
    result += pow(r,n);
    onum = onum/10;
  }  
    if(result == n1)
       printf("Number is Armstrong");
    else
       printf("Number is not Armstrong");   
    return 0;
}