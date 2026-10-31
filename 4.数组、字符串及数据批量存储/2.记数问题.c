#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int i,cnt=0;
    for(i=1;i<=n;i++){
        int num=i;
        while(num>0){
            int digit=num%10;
            if(digit==x){
                cnt++;
            }
             num=num/10;
        }
    }
    printf("%d",cnt);
}