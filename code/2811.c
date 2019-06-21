#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main ()
{
	int n,k;
	scanf ("%d %d",&n,&k);
	int z[n];
	int i=0;
	while (i<n)
	{
		scanf("%d",&z[i]);
		i++;
	}
	int max ();
	int min ();
	int Ni ();
	int Mi ();
	int Hi ();
	int l,r;

	while (~scanf("%d %d",&l,&r))
	{
		int out;
		out=Hi (z,min(Ni(z,l,r,n),Mi(z,l,r,n)),max(Ni(z,l,r,n),Mi(z,l,r,n)),n);
		printf("%d\n",out);
	}

	return 0;
}

int max (int a,int b)
{
	if (a>b)
	return a;
	return b;
}

int min (int a,int b)
{
	if (a>b)
	return b;
	return a;
}

int Ni (int z[],int l,int r,int n)
{
	int i=l;
	int sum=0;
	for (i;i<=r;i++)
	sum=sum+z[i];
	sum=sum%n;
	return sum;
}

int Mi (int z[],int l,int r,int n)
{
	int i=l;
	int result=1;
	for (i;i<=r;i++)
	result=(result*(z[i]%n))%n;
	return result;
}

int Hi (int z[],int l,int r,int n)
{
	int i=l+1;
	int plus=z[l];
	for (i;i<=r;i++)
	plus=plus^z[i];
	return plus;
}