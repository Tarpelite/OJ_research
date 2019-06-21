#include<stdio.h>

int N(int l,int r,int a[],int n)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum=sum+a[i]%n;
	}
	return sum%n;
}

int M(int l,int r,int a[],int n)
{
	int mul=1,i;
	for(i=l;i<=r;i++)
	{
		mul=mul*a[i]%n;
	}
	return mul%n;
}

int H(int l,int r,int a[])
{
	int h=a[l],i;
	
	if(l==r)
	{
		return h;
	}
	else
	{
		for(i=l;i<r;i++)
		{
			h=h^a[i+1];
		}
		return h;
	}
	
}

int main()
{
	int n,k,a[105],b[105][2],i,l,r,sum,mul,yihuo;
	
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
		
	
	for(i=0;i<k;i++)
	{
		
		l=b[i][0];
		r=b[i][1];
		
		sum=N(l,r,a,n);
		mul=M(l,r,a,n);
		
		
		if(sum<=mul)
		{
			l=sum;
			r=mul;
		}
		else if(sum>mul)
		{
			l=mul;
			r=sum;
		}
		
		yihuo=H(l,r,a);
			
		printf("%d\n",yihuo);
		
	}
	
	return 0;
 }