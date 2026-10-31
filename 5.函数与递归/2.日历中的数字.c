#include<stdio.h>
int order(int x,int y,int z)
{
	int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(x%400==0||x%4==0&&x%100!=0)
	{
		arr[2]=29;
	}
	int i=1,num=0;
	for(i;i<=arr[y];i++)
	{int c=x*10000+y*100+i;
		do{if(c%10==z)
	{num++;
	}
		 } while(c/=10);
	}
	return num;
}
int main()
{
	int x,y,z;
	while(~scanf("%d%d%d",&x,&y,&z))
    {printf("%d\n",order(x,y,z));}
}