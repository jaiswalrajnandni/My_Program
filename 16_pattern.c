/* Print the following number pattern
   0000000
    111111
     22222
      3333
       444
        55
         6
*/
#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        k=i-1;
        for(j=1; j<=n; j++){
            if(j>=i)
              printf("%d",k);
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}