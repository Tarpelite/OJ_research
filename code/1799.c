#include<stdio.h>
int main()
{
	int m,n;
	long long jiecheng(int);
	scanf("%d%d",&m,&n);
	if(n==0){
		printf("1");
	}
	else if(m==0){
		printf("o");
	}
	else {
		if(m<=n){
		printf("1");
	}
	else{
		printf("%lld",jiecheng(m)/(jiecheng(n)*jiecheng(m-n)));
	}
	} 
}
long long jiecheng(int x)
{
	long long y=1,i=1;
	for(;i<=x;i++)
	y=y*i;
	return y;
}