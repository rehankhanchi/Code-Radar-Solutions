#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
    printf("Equilateral");
    if(a==b!=c || a!=b==c)
    printf("Isosceles");
    else
    printf("Scalen");
    return 0;
}