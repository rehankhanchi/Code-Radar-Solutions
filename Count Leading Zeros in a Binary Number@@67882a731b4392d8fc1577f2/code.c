#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    for (i=0;(a|1)==0;i++){
        a= a>>1;
    }
    printf("%d",32-(i+1));
    return 0;
}