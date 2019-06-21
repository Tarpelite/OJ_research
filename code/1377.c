#include <stdio.h>
#define MAX_N 110000
int prime_tab[MAX_N/2],prime_n;
int is_prime(int a)
{
int i;
for(i=0;prime_tab[i]*prime_tab[i]<=a;i++)
if(a%prime_tab[i]==0)
return 0;
return 1;
}
void gen_primes(int max_n)
{
	int i;
	prime_tab[0]=2,prime_n=1;
	for(i=3;i<=max_n;i+=2)
	if(is_prime(i))
	prime_tab[prime_n++]=i;
}
int main()
{
	int i,k;
	scanf("%d",&k);
	
	gen_primes(MAX_N);
	
	for(i=0;i<prime_n;i++){
		if((k>=prime_tab[i])&&k<prime_tab[i+1])
			printf("%d",prime_tab[i+1]);
	}
	
	if(k==1)
		printf("2");
		
	return 0;
}