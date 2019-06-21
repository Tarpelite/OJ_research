#include<stdio.h>
int N(int l,int r,int x);

int M(int l,int r,int x);

int H(int l,int r);

int a[1000];
int main()
{
	int x,K,f,e,c,b;

	scanf("%d %d",&x,&K);
	for(int i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=K;i++)
	{
		scanf("%d%d",&f,&e);
	if(N(f,e,x)<M(f,e,x)) 
		{
			b=N(f,e,x);c=M(f,e,x);
		}
		else {
			c=N(f,e,x);b=M(f,e,x);
		}
	printf("%d\n",H(b,c));
	
		
		
	}
	
	return 0;
}
int N(int l,int r,int x)
{
	int sum=0;
	for(int m=l;m<=r;m++){
		sum=sum+a[m];
	}
	return sum%x;
}

int M(int l,int r,int x)
{
	int sum=1;
	for(int m=l;m<=r;m++){
		sum=sum%x*(a[m]%x);
	}
	return sum%x;
}

int H(int l,int r)
{
	int sum=a[l];
	for(int m=l+1;m<=r;m++){
		sum=sum^a[m];
	}
	return sum;
}