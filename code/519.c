#include<stdio.h>
#define min(A,B) ((A>B)? B:A)
#define max(A,B) ((A<B)? B:A)
int Nnn(int,int);
int Mmm(int,int);
int Hhh(int,int);
int a[105],n,sum[105];
int main()
{
	int k,l[105],r[105],a1[105],b1[105],c1[105],i,j,sumup;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
	
	for(j=0;j<n;j++)
	{
		sumup=0;
	for(i=0;i<=j;i++)
	{
		sumup+=a[i];
	}
		sum[j]=sumup;
	}
	
	for(i=0;i<k;i++)
	{
	scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++)
	{
		int N = Nnn(l[i],r[i]);
		int M = Mmm(l[i],r[i]);
		
	b1[i]=min(N,M);
	c1[i]=max(N,M);
	a1[i]=Hhh(b1[i],c1[i]);
	printf("%d\n",a1[i]);
	}
	return 0;
}
int Nnn(int o,int p)
{
	int x;
	x=sum[p]-sum[o]+a[o]; 
	return x%n;
}

int Mmm(int o,int p)
{
	int y=1,i;
	for(i=o;i<=p;i++)
	y=((y%n)*(a[i]%n))%n;
	return y;
}
int Hhh(int o,int p)
{
	 int x = 0,i;   
    for (i = o; i <= p; i++)
        x ^= a[i];
    return x;
}