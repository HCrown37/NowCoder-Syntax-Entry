#include<stdio.h>
int main()
{
    int n;
    float f;
    scanf("%d",&n);
    if(n%2==0){
        f=n/2;
    }
    else{
        f=3*n+1;
    }
    printf("%.0f",f);
    return 0;
    
}