#include<stdio.h>
int N(int l,int r,int a[],int n)
{
	int s=0;
	int i;
	for(i=l;i<=r;i++)s+=a[i]%n;
	return s%n;
}
int M(int l,int r,int a[],int n)
{
	int s=1;
	int i;
	for(i=l;i<=r;i++)s=s%n*a[i];
	return s%n;
}
int H(int l,int r,int a[])
{
	int s=a[l];
	int i;
	for(i=l+1;i<=r;i++)s=s^a[i];
	return s;
}
int main()
{
  int a[105];
  int n,k,i,l,r;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  for(i=0;i<k;i++)
  {
  	scanf("%d%d",&l,&r);
  	N(l,r,a,n)>M(l,r,a,n)?printf("%d\n",H(M(l,r,a,n),N(l,r,a,n),a)):printf("%d\n",H(N(l,r,a,n),M(l,r,a,n),a));
  }
  return 0;
}