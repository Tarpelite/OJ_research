#include<stdio.h>
int isprime(int n)
{
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int prime(int n)
{
	while(1)
	{
		n+=2;
		if(isprime(n)) return n;
	}
}

int main()
{
	int k;
	scanf("%d",&k);
	if(k==2) printf("3");
	else printf("%d",prime(k));
	return 0;
}