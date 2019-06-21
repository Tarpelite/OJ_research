#include <stdio.h>
int N (int l,int r,int a[],int n)
{
	int result=0,i;
	for (i=l;i<=r;i++)
	{
		result=result+(a[i]%n);
		result=result%n;
	}
	return result;
}

int M (int l,int r,int a[],int n)
{
	int result2=1,i;
	for (i=l;i<=r;i++)
	{
		result2=result2*a[i];
		result2=result2%n;
	}
	return result2;
}

int H (int left,int right,int a[])
{
	int result3,j;
	result3=a[left];
	for (j=left+1;j<=right;j++)
	{
		result3=result3^a[j];
	}
	return result3;
}

int main()
{
	int i,a[102]={0},n,K,l,r,left,right,n0,m0,re,m1,n1;
	scanf ("%d %d",&n,&K);
	for (i=0;i<n;i++) 
	    scanf ("%d",&a[i]);
	for (i=0;i<K;i++)
	{
		scanf ("%d %d",&l,&r);
		n0 = N (l,r,a,n);
		m0 = M (l,r,a,n);
		m1 = m0 %n;
		n1 = n0 %n;
		left=n1<m1?n1:m1;
		right=n1<m1?m1:n1;
		re=H (left,right,a);
		printf ("%d\n",re);
	}
	return 0;
}