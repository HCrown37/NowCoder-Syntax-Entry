#include<stdio.h>
#include<math.h>
int num(int x){
	if(x<1)return 0;
	if(x==2)return 1;
	if(x%2==0)return 0;
	for(int i=3;i<sqrt(x);i+=2){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int num1(int x){
	int count=0; 
	while(x>0){
		count++;
		x=x/10;
	}
	return count;
}
int main(){
	int a,count;
	scanf("%d",&a);
	int ca=a/10;
	count=num1(a);
	for(int i=1;i<count;i++){
		a=a*10;
	}
	for(int i=1;i<=count;i++){
		int b=ca%10;
		int count1=num1(ca);
		while(count1/10>0){
			b=b*10;
			count1=count1/10;
		}
		a=a+b;
		ca=ca/10;
	}
	int o=num(a);
	if(o==0){
		printf("noprime\n");
	}
	else{
			printf("prime");
		}
}