#include<stdio.h>
#include<stdlib.h>
long long js(long long n)
{
	return n==0 ? 1 :n*js(n-1);
}
int main()
{
	int m,n,sum;
	scanf("%d %d",&m,&n);
	if(n==0 || m==0)
	sum=0;
	else 
	{
		if(n >= m)
		sum=1;
		else
		sum=js(m)/(js(m-n)*js(n));
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}