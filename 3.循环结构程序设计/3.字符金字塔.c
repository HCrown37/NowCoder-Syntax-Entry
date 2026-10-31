#include<stdio.h>
int main(void)
{
    char ch;
    int m;
    scanf("%c",&ch);
    int n= ch-'A'+1;
    for(int i=1;i<=n;i++){
        int fir='A';
        for(m=1;m<=n-i;m++){
            printf(" ");
        }
        for(m=1;m<=i;fir++,m++){
            printf("%c",fir);
        }
        fir--;
        m--;
        for(fir--,m--;m>=1;fir--,m--){
            printf("%c",fir);
        }
        printf("\n");
    }
    return 0;
        
}