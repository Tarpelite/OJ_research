#include <stdio.h>
#define max(a,b)(a>=b?a:b)
#define min(a,b)(a<=b?a:b)

int n;
int A[100]={0};
int N(int l,int r)
{
	int i,b=0;
	for(i=l;i<=r;i++)
	b+=A[i];
	return b%n;	
}

int M(int l,int r)
{
	int i,b=1;
	for(i=l;i<=r;i++)
	{
	b*=A[i];
	while(b>n)
	b-=n;
	}
	return b%n;
}

int H(int l,int r)
{
	int i,b=0;
	for(i=l;i<=r;i++)
	b=b^A[i];
	return b;
}

int main(void)
{
	int i,K,l[100]={0},r[100]={0};
	int answer[100]={0};
	scanf("%d %d",&n,&K);
	
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	for(i=0;i<K;i++)
	scanf("%d %d",&l[i],&r[i]);
	
	for(i=0;i<K;i++)
	{
		answer[i]=H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));
		printf("%d\n",answer[i]);
	}
	
	return 0;
}