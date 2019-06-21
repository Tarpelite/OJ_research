#include<stdio.h>
long long jc(long long x){
	long long t;
	if(x==0){
		t=1;
		return t;
	}
	else if(x==1){
		t=1;
		return t;
	}
	else 
	return x*jc(x-1);
	
}
int main()
{
	long long m, n, x1, x2, x3, sum, i;
	
	
	scanf("%lld%lld",&m,&n);
	x1=jc(m);
	x2=jc(n);
	x3=jc(m-n);
	sum=x1/(x2*x3);
	printf("%lld",sum);
	return 0;
	
 }