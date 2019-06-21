#include<stdio.h>
int H_1(int a,int b,int c[]);
int N_1(int a,int b,int c[]);
int M_1(int a,int b,int c[],int n);
int max(int a,int b);
int min(int a,int b);
int main()
{
	int n,k,l,r;
	scanf("%d%d",&n,&k);
	int a[100],b[100];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		b[i]=H_1(min(M_1(l,r,a,n)%n,N_1(l,r,a)%n),max(M_1(l,r,a,n)%n,N_1(l,r,a)%n),a);
	}
	for(int i=0;i<k;i++)
	printf("%d\n",b[i]);
	return 0;
}

int M_1(int a,int b,int c[],int n)
{
	int sum=1;
	for(int i=a;i<=b;i++)
	sum=sum*c[i]%n;
	return sum;
}

int N_1(int a,int b,int c[])
{
	int sum=0;
	for(int i=a;i<=b;i++)
	sum=sum+c[i];
	return sum;
}

int H_1(int a,int b,int c[])
{
	int sum=c[a];
	for(int i=a+1;i<=b;i++)
	sum=sum^c[i];
	return sum;
}

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}