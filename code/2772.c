#include<stdio.h> 
int N(int l,int r,int A[],int n)
{
    int i,b=0;
    for(i=l;i<=r;i++)
        b=b+A[i];
    b%=n;
    return b;
}
int M(int l,int r,int A[],int n)
{
    int i,b=1;
    for(i=l;i<=r;i++)
    {
		b=b*A[i];
        b%=n;
	}
    return b;
}
int H(int l,int r,int A[],int n)
{
    int i,b=A[l];
    for(i=l+1;i<=r;i++)
        b^=A[i];
    return b;
}
int min(int a,int b)
{
	return((a<b)?a:b);
}
int max(int a,int b)
{
	return((a>b)?a:b);
}
int main()
{
	int i,n,K;
	int A[200]={0},l[200]={0},r[200]={0};
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<K;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<K;i++)
	{
		int L,R;
		L=N(l[i],r[i],A,n);
		R=M(l[i],r[i],A,n);
		printf("%d\n",H(min(L,R),max(L,R),A,n));
	}
	return 0;
}