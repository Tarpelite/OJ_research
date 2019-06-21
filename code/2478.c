#include <stdio.h>
int prime (int a)
{
	int i,n,c,e=1,d;
	
	for (i=2;i<a;i++)
	{
		if (a%i==0) 
		{
			e=0;
			d=0;
			break;
		}	
	}
	if (e!=0) d=1; 
	return d;
}

int main()
{
	int n,i,judge;
	scanf ("%d",&n);
	judge=prime(n);
	if (judge==1) 
		n=n+1;

	for (i=n;i<3*n;i++)
	{
		judge=prime(i);
		if (judge==1) break;
	}
	printf ("%d",i);
	return 0;
}