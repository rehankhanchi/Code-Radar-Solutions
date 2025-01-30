#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    for (i=0;(a|1)!=1;i++){
        a= a>>31;
    }
    printf("%d",i);
    return 0;
}