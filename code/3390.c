#include<stdio.h>
int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
	if(n%i==0)
	return 0;
	return 1;
} 
int main()
{
	int n,m;
	scanf("%d",&n);
	for(m=n+1;;m++){
		if(isprime(m)){
			printf("%d",m);
			break;
		}
	}
	return 0;
}