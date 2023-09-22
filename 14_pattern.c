/* Print the following star pattern.
      *
    * * *
  * * * * *
* * * * * * *
*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        for(j=1; j<=(n*2)-1; j++){
            if(j>=5-i && j<=3+i)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}