#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum= (a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}