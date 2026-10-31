#include<stdio.h>
int main()
{
    int L,M;
    int i,j,a,b,sum=0;
    int c[10001]={0};
    scanf("%d %d",&L,&M);
    for(i=0;i<M;i++)
	{
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(c[j]==0)
			{
                c[j]=1;
                sum++;
            }
        }
    }
    printf("%d",L-sum+1);
    return 0;
}