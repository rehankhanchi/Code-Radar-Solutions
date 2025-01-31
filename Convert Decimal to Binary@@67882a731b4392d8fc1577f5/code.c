#include <stdio.h>
int main() {
    int a;
    int temp=1;
    scanf("%d",&a);
    while(temp*2<=num)
    {
        temp*=2;
    }
    int ans=0;
    while(temp!=1){
        int q =num/temp;
        ans =ans*10+q;
        num= num -q*temp;
        temp=temp/2;
    }
    printf("%d",ans);
    return 0;
}