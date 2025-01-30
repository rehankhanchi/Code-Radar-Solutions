#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int shift = 1<<31;
    if(a & shift){
        printf("Set");
    }
    else 
    printf("Not Set");
    return 0;
}