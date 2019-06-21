#include<stdio.h>
int isprime(int n)
{
	if(n==1) return 1;
	if(n==2) return 1;
	for(int i=n-1;i>=2;i--){
		if(n%i==0){
			return 0;
			break;
		}
		if(i==2) return 1;
	}
}
int main()
{
	int x,n;
	scanf("%d",&n);
	x=n+1;
	while(isprime(x)!=1){
		x=n+1;
		n++;
	}
	printf("%d",x);
	return 0;
}