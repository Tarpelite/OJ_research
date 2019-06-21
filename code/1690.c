#include<stdio.h>
#include<math.h>
int i,a[100],n;
int N(int l,int r);
int H(int l,int r);
int M(int l,int r);
int main()
{
	int K,max,min,k,answer,l,r;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<K;k++)
	{
		scanf("%d%d",&l,&r);
		max=N(l,r);
		min=M(l,r);
		if(max<=min)
		{
			max=M(l,r);
			min=N(l,r);
		}
		answer=H(min,max);
		printf("%d\n",answer);
	}
	return 0;
}

int N(int l,int r)
{
	int s,t=0;
	for(i=l;i<=r;i++)
	{
		t=t+a[i];
	}
	s=t%n;
	return s;
}

int M(int l,int r)
{
	int t=1,s;
	for(i=l;i<=r;i++)
	{
		t=t*a[i];
		t=t%n;
	}
	s=t%n;
	return s;
}

int H(int l,int r)
{
	int s=a[l];
	for(i=l+1;i<=r;i++)
	{
		s=s^a[i]; 
	}
	return s;
}