#include<stdio.h>
int prime[100200],isPrime[200400];

int main(){
	for(int i=2;i<=100200;i++)
	{
		if(!isPrime[i])
			prime[++prime[0]]=i;
		for(int j=1;j<=prime[0]&&i*prime[j]<=100200;j++)
		{
			isPrime[i*prime[j]]=1;
			if(i%prime[j]==0)
				j=prime[0]+1;
		}
	}
	int n,m,i;
	scanf("%d",&n);
	if(n==0){printf("2");
	}
	else{
	for(i=n+1;n<=100200;i++)
	{
		if(isPrime[i]==0) {printf("%d",i); break;
		}
	}}

	return 0;
}