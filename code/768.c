#include <stdio.h>
int niupple(int s[],int l,int r,int n)
{
	int i=l,sum=0;
	for(i=l;i<=r;i++)
	{
		sum=sum+s[i];
	}
	sum=sum%n;
	return sum;
}

int mountvoom(int s[],int l,int r,int n)
{
	int i=l,sum=1;
	for(i=l;i<=r;i++)
	{
		sum=sum*s[i]%n;
	}
	return sum;
}

int hugegun(int s[],int l,int r)
{
	int sum;
	sum=s[l];
	l++;
	while(l<=r)
	{
		sum=sum^s[l];
		l++;
	}
	return sum;
}

int main() 
{
	int n,k,i=0,x,y,l,r,min,max;
	int a[1000],b[1000];
	scanf("%d%d",&n,&k);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(~scanf("%d%d",&l,&r))
	{
		x=niupple(a,l,r,n);
		y=mountvoom(a,l,r,n);
		if(x>y)
		{
			max=x;
			min=y;
		}
		else
		{
			max=y;
			min=x;
		}
		b[i]=hugegun(a,min,max);
		i++;
	}
	for(i=0;i<k;i++)
		printf("%d\n",b[i]);
	return 0;
}