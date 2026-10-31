#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int j=0;j<T;j++)
    {
        int n;
        scanf("%d",&n);
            for(int x=1;x<=(n+1)/2;x++)
            {
                for(int y=(n+1)/2;y>x;y--)
                {
                    printf(" ");
                }
                for(int m=0;m<2*x-1;m++)
                {
                    printf("*");
                }
                printf("\n");
            }
            for(int x=(n+1)/2-1;x>=1;x--)
            {
                 for(int y=(n+1)/2;y>x;y--)
                {
                    printf(" ");
                }
                for(int m=0;m<2*x-1;m++)
                {
                    printf("*");
                }
                printf("\n");
            }
    }
}