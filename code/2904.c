#include<stdio.h>
#include<stdlib.h>
	int n;
	int A[100],b[100];
int N(int l,int r,int A[],int n)
{

	int sum=0;
	int i;
	for(i=l;i<=r;i++)
	sum = (sum + A[i]) % n;
	return sum;
}

int M(int l,int r,int A[],int n)
{

	int sum=1;
	int i;
	for(i=l;i<=r;i++)
	sum=(sum * A[i]) % n;
	return sum;
}

int max(int a,int b)
{
	if(a>=b)
	return a;
	else
	return b;
}

int min(int a,int b)
{
	if(a<=b)
	return a;
	else 
	return b;
}

int H(int a,int b,int A[])
{
	int i,sum=0;

	for(i=a;i<=b;i++)
	sum ^=A[i];
	return sum;
	
}
int main()
{
	int K,i,l,r,q,p;
	scanf("%d %d",&n,&K); 
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
 	for(i=1;i<=K;i++)
 	{
 		scanf("%d %d",&l,&r);
 		q=min(N(l,r,A,n),M(l,r,A,n));
 		p=max(N(l,r,A,n),M(l,r,A,n));
 		b[i]=H(q,p,A);
	}
	for(i=1;i<=K;i++)
	printf("%d\n",b[i]);
	return 0;
}