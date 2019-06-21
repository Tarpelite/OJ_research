#include<stdio.h>
unsigned long long M(int n);
int main()
{
	int m,n,num,c;
	scanf("%d%d",&m,&n);
	c=m-n;
	if(m==0||n==0)
	{
		printf("0");
	}
	else
	{
		if(c>=0)
		{
			num=M(m)/(M(c)*M(n));
			printf("%d",num);
		}
	else
		{
			printf("0");
		}
	
	}
	
	return 0;
	
}
unsigned long long M(int n)
{
	unsigned long long j=1,i;
	for(i=1;i<n;i++)
	{
		j=j*(i+1);
	} 
	 return j;
}