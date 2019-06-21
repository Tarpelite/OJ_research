#include<stdio.h>
#include<math.h>
int is_prime (int);
int main()
{
	int x;
	scanf("%d",&x);
	x+=1;
	while(is_prime(x))//是质数 1 不是质数 0 
	{
		x++;
	}
	printf("%d",x);
}

int is_prime(int m)
{
	int k;
	k=(int)sqrt(m)+1;
	for(int i=2;i<=k;i++)
	{
		if((m%i)==0)
		return 1;
		else;
		
	}
	return 0;
}