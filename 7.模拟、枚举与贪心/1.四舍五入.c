#include<stdio.h>
int main(){
    int n,t;
    scanf("%d%d",&n,&t);
    char a[10000];
    scanf("%s",a);
    int i,j,k;
    for(i=0;i<n;i++){
        if(a[i]=='.'){
            break;
        }
    }
    if(i==n){
        printf("%s",a);
        return 0;
    }
    for(j=0;j<t;j++){
        for(k=i+1;k<n;k++){
            if(a[k]>='5'){
                n=k;
                a[k]='\0';
                a[k-1]++;
            }
        }
    }
    if(a[i]!='.'){
        a[i]='\0';
        for(j=i-1;j>=0;j--){
            if(a[j]=='9'){
                a[j]='0';
            }
            else{
                a[j]++;
                break;
            }
        }
        if(j=-1&&a[0]=='0'){
            printf("1%s",a);
        }
        else{
            printf("%s",a);
        }
        return 0;
    }
    printf("%s",a);
    return 0;
}