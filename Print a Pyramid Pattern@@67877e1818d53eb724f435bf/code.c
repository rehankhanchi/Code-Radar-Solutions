#include <stdio.h>
include main (){
    int i,j,k,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for (k=0;k<(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}