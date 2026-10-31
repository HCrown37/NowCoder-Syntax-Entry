#include<stdio.h>
int main(){
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            k++;
            printf("%4d",k);
        }
        printf("\n");
    }
    return 0;
}