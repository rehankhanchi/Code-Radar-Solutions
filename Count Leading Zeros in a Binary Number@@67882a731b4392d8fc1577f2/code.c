#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    if (a==0)
    printf("0");
    for (i=0;(a|1)!=1;i++){
        a= a>>1;
    }
    printf("%d",32-(i+1));
    return 0;
}