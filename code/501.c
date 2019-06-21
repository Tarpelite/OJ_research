#include<stdio.h> 

int N(int a1,int b1,int a[],int n) 
{
	int x,i;
	x=0;
	for(i=a1;i<=b1;i++)
	{
		x=x+a[i]%n;
		x=x%n;
	}
	return x;
}
int M(int a2,int b2,int a[],int n)
{
	int y,i;
	y=1;
	for(i=a2;i<=b2;i++)
	y=y*a[i]%n;
	return y;
}
int H(int a3,int b3,int a[])
{
	int z,i;
	z=a[a3];
	for(i=a3+1;i<=b3;i++)
	z=z^a[i];
	return z;
}
int min(int a4,int b4)
{	
	int min;
	min=a4;
	if(a4>=b4)
	min=b4;
	else
	min=a4;
	return min;
}
int max(int a5,int b5)
{
	int max;
	max=a5;
	if(a5>=b5)
	max=a5;
	else
	max=b5;
	return max;
}
int main()
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int l[k],r[k],b[k],c[k],d[k],e[k];
	for(i=0;i<k;i++)
	scanf("%d%d",&l[i],&r[i]);
	for(i=0;i<k;i++)
	{
		d[i]=N(l[i],r[i],a,n);
		b[i]=M(l[i],r[i],a,n);
		c[i]=H(min(b[i],d[i]),max(b[i],d[i]),a);
		printf("%d\n",c[i]);
	}
	
	return 0;
}