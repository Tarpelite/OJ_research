#include<stdio.h>
int n;
int a[100];
int l[100],r[100];

int N(int x,int y)
{
	int i,sum=0;
	for(i=x;i<=y;i++)
		sum+=a[i];	
	return sum%n;
}

int M(int x,int y)
{
	int i,j=1;
	for(i=x;i<=y;i++)
	{j*=(a[i]%n);
	 j%=n;}
	return j%n;
}

int H(int x,int y)
{
	int i,k=0;
	for(i=x;i<=y;i++)
	  k=k^a[i];
	return k;
}

int max(int c,int b)
{
	if(c>b) return c;
	else return b;
}

int min(int c,int b)
{
	if(c<b) return c;
	else return b;
}

int main()
{
	int i,k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	i=0;
	while (~scanf("%d%d",&l[i],&r[i])) i++;
	for(i=0;i<k;i++)
	  printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
	return 0;
 }