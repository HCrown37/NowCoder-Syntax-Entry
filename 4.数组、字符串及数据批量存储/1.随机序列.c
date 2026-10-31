#include<stdio.h>

long long a[10005];
int main(){
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        long long sum=0,max=-1e18,min=1e18;
        
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum+=a[i];
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
        }
        
        double mean=(double)sum/n,var=0;
        
        for(int i=0;i<n;i++){
            var+=(a[i]-mean)*(a[i]-mean);
        }
        printf("%lld %.3f\n",max-min,var/n);
    }
    return 0;
}