#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	if(n>m-n)
		n=m-n;
	long long answer=1;
	
	for(int i=m;i>=m-n+1;i--)
		answer=answer*i;
		
	for(int i=1;i<=n;i++)
		answer=answer/i;
	
	printf("%d",answer);
	
	
	return 0;
}