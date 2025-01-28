#include <stdio.h>

int main() {
    int a,b ;
    scanf("%d %d",&a,&b);
    if (a>b)
    printf("loss");
    else if(a<b)
    printf("profit");
    else
    printf("No Profit No Loss");
    return 0;
}