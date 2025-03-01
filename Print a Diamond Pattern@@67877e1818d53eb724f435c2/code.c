#include <stdio.h>
int main(){
    int a,k=1;
    scanf("%d",&a);
    for (int i=1; i<=a;i++){
        for(k=1;k<=a-i;k++)
        printf(" ");
        {
        for (int j=1;j<=i;j++)
        printf("*");
        }
        printf("\n");
    }
    
    for (int i=a-1; i>=1;i--){
        for(k=1;k<=a-i;k++)
        printf(" ");
        {
        for (int j=1;j<=i;j++)
        printf("*");
        }
        printf("\n");
    }
return 0;
}