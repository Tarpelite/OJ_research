#include <stdio.h>
 
int Cal(int N , int k)
{	
	if(0 == k || 0 == N)
	{
		return 1;
	}
	
	if(N < k)
	{
		return 0;
	}
	
	if(N == k)
	{
		return 1;
	}
	
	return Cal(N-1,k) + Cal(N-1,k-1);
}
 
//	test
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",Cal(m,n));
	return 0;
}