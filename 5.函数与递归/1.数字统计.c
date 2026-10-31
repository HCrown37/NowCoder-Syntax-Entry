#include<stdio.h>
void sum(int begin,int end)
{
int cnt=0;
for(int i=begin;i<=end;i++){
    int num=i;
    while(num>0){
        if(num%10==2){
        cnt++;
        }
        num/=10;
    }
} 
printf("%d",cnt);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}