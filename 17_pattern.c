/* Print the following star pattern.

* * * * *
*       *
*       *
*       *
* * * * * 

*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            if(j==1 || j==n || i==1 || i==n)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}