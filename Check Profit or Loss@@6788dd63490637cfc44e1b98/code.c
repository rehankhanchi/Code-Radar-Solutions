#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if ((int)a>a)
    printf("Profit");
    else if(a<a)
    printf("Loss");
    else
    printf("No Profit No Loss")
    return 0;
}