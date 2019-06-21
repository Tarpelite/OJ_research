#include<stdio.h>

long long jc(long long n)
{
	int i;
	
	long long j=1;
	
	for(i=1;i<=n;i++){
		
		j = i*j;
	}
	return j;
}
int main()
{
	int m,n;
	
	long long c;
	
	scanf("%d%d",&m,&n);
	
	if(m==0||n>=m){
		
		printf("1");
	
		return 0;
	}
	c = jc(m)/(jc(n)*jc(m-n));
	
	printf("%lld",c);
	
	return 0;
}