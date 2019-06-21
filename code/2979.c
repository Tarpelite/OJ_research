#include<stdio.h>
int main()
{
	int n,i,k,h;
	scanf("%d",&n);
	for(h=n+1;;h++)
	{k=0;
	for(i=2;i<n;i++)
	{
		if(h%i==0)
		k++;
	}
	if(k==0)
	{
	printf("%d",h);
	break;
	}
	
	}
	
}