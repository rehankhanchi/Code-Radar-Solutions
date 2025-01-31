#include <stdio.h>
int main() {
    int num;
    int temp=1;
    scanf("%d",&num);
    while(temp*2<=num)
    {
        temp*=2;
    }
    long long ans=0;
    while(temp!=1){
        int q =num/temp;
        ans =(ans*10)+q;
        num= num-(q*temp);
        temp=temp/2;
    }
    printf("%lld",ans);
    return 0;
}