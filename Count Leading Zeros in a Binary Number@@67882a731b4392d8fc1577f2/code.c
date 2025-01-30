#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    for (i=0;(a|1)!=1;i++){
        a= a>>1;
    }
    printf("%d",32-(i));
    return 0;
}