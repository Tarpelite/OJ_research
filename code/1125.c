#include<stdio.h>
int max_(int m,int n);
int min_(int m,int n);
int N_(int l,int r);
int M_(int l, int r);
int H_(int l,int r);
int A[10000]={0};
int l[10000], r[10000];
int n;
int main()
{
	int  K ,j;
	scanf("%d%d",&n,&K);
	for (j=0;j<n;j++)
		scanf("%d",&A[j] ) ; 
	for(j=0;j<K;j++)
		scanf("%d %d",&l[j],&r[j]);
	for(j=0;j<K;j++)
	{
		printf("%d\n",H_( min_( N_(l[j],r[j]) ,M_(l[j],r[j]) ) , max_( N_(l[j],r[j]) ,M_(l[j],r[j] ) ) ) );
	}
	return 0;
}
int max_(int m,int n)
{
	if(m<n)
	    return n;
	else
	    return m;
}
int min_(int m,int n)
{
	if(m<n)
	    return m;
	else 
	    return n;
}

int N_(int l,int r)
{
	int i,sum=0;
	for(i=l;i<=r;i++)
	{
		sum = sum + A[i] ;
	}return (sum%n );
}
int M_(int l, int r)
{

	int i,pro=1;
	for(i=l;i<=r;i++)
	{
		pro = pro * ( A[i] ) ;
		if(pro>n)  pro=pro%n;
	 } 
	 return (pro%n );
}
int H_(int l,int r)
{
int i,res=0;
for(i=l;i<=r;i++)
res=res^A[i];
return res;
}