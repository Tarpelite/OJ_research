#include<stdio.h>

int N(int,int,int[],int);
int M(int,int,int[],int);
int H(int,int,int[],int);
int min(int,int);
int max(int,int);

int main()
{
	int n,k,i,j,m;
	scanf("%d %d",&n,&k);
	int a[n],l[k],r[k],b[k];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		scanf("%d %d",&l[j],&r[j]);
		b[j]=H(min(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),max(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),a,n);	
	}
	for(m=0;m<k;m++)
	{
		printf("%d\n",b[m]);
	}
	return 0;
}

int N(int x,int y,int a[],int n)
{
	int z,i;
	z=0;
	for(i=x;i<=y;i++)
	{
		z=(z+a[i])%n;
	}
	return z;
}

int M(int x,int y,int a[],int n)
{
	int z,i;
	z=1;
	for(i=x;i<=y;i++)
	{
		z=(z*a[i])%n;
	}
	return z;
	
}

int H(int x,int y,int a[],int n)
{
	int z,i;
	z=a[x];
	for(i=x+1;i<=y;i++)
	{
		z=z^a[i];
	}
	return z;
	
}

int min(int x,int y)
{
	int z;
	if(x>=y)
	{
		z=y;
	}
	else
	{
		z=x;
	}
	return z;
}

int max(int x,int y)
{
	int z;
	if(x>=y)
	{
		z=x;
	}
	else
	{
		z=y;
	}
	return z;
}