#include <stdio.h>
int main() {
    unsigned a,i=0;
    scanf("%d",&a);
    while(a!=0)
    {
        i++;
        a>>=1;
    }
    printf("%u",32-i);
    return 0;
}