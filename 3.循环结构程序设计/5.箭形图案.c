#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i = 0;i<=n;i++)
        {
            for(int j = 0;j<2*n-2*i;j++)
            {
                printf(" ");
            }
            for(int k = 0;k<=i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        
         for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=2*i;j++)
            {
                printf(" ");
            }
            for(int k = 1;k<=n+1-i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}