#include<stdio.h>

int N(int a,int b,int c[],int n)
{
	int sum=0;
	for(int i=a;i<=b;i++)
        sum=sum+c[i];
	    sum=sum%n;
	return sum;
}

int H(int a,int b,int c[],int n)
{
	int sum=c[a];
	for(int i=a+1;i<=b;i++)
        sum=sum^c[i];
	return sum;
}

int M(int a,int b,int c[],int n)
{
	int sum=1;
	for(int i=a;i<=b;i++)
	{
	    sum=sum*c[i];
	    sum=sum%n;
	}
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

int main()
{
	int n,k,l,r;
	scanf("%d%d",&n,&k);

	int a[n],b[n];
	for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		b[i]=H(min(M(l,r,a,n),N(l,r,a,n)),max(M(l,r,a,n),N(l,r,a,n)),a,n);
	}

	for(int i=0;i<k;i++)
        printf("%d\n",b[i]);

	return 0;
}