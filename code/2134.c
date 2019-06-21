#include<stdio.h>
int zhi(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n+1;;i++)
	{
	   if(zhi(i)==1)
	   {
	     printf("%d",i);
	     break;
       }
       else continue;
	}
	return 0;
}