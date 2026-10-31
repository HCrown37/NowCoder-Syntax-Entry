#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n,i,j,k=0;
    char b[10][100000],*a;
    a=(char*)malloc(sizeof(char)*100000);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=0;
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='0'||a[j]=='2'||a[j]=='4'||a[j]=='6'||a[j]=='9'){
                b[i][k++]=a[j];
                continue;
            }
            else if(strncmp(a+j,"zero",4)==0)
            {
                b[i][k++]='0';
                j=j+3;
            }
             else if(strncmp(a+j,"two",3)==0)
            {
                b[i][k++]='2';
                j=j+2;
            }
             else if(strncmp(a+j,"four",4)==0)
            {
                b[i][k++]='4';
                j=j+3;
            }
             else if(strncmp(a+j,"six",3)==0)
            {
                b[i][k++]='6';
                j=j+2;
            }
             else if(strncmp(a+j,"nine",4)==0)
            {
                b[i][k++]='9';
                j=j+3;
            }
            b[i][k]='\0';
        }
    }
   for(int i=0;i<n;i++)
       printf("%s\n",b[i]);
    return 0;
}