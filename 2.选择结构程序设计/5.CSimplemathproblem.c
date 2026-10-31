#include<stdio.h>
int main()
{
    long long X,Y;
    scanf("%lld %lld",&X,&Y);
    if(Y%X==0)
        printf("%lld",X+Y);
    else
        printf("%lld",Y-X);
}