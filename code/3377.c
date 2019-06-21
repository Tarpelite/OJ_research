#include <stdio.h>
int isprime(int n)
{
	int i=2;
	for(;i*i<=n;++i){
		if(n%i==0)
			return 0;
	}return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i=n+1;
	while(!isprime(i)){
		++i;
	}printf("%d",i);
	return 0;
}