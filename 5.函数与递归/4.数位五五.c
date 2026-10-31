#include<stdio.h>
int main()
{
    int count_5 (long long x,long long y);
   long long x,y;
    scanf("%lld %lld",&x,&y);
    int count=count_5(x,y);
    printf("%d\n",count);
    return 0;
}
int count_5 (long long x,long long y)
{
    int count=0;
    for(long long i=x;i<=y;i++)
    {
        long long sum=0,t=i;
        while(t!=0)
        {
            long long a=t%10;
            sum+=a;
            t=t/10;
        }
        if(sum%5==0)count++;
    }
    return count;
}