#include<stdio.h>
int N(int l,int r,int n,int a[])
{	
    int i,sum=0;
	for(i=l;i<=r;i++)
	{sum=sum+a[i];
	}
	sum=sum%n;
	return sum;
 } 
 int M(int l,int r,int n,int a[])
 {
 	int i,s=1;
 	for(i=l;i<=r;i++)
 	{s=s*a[i];
	 s=s%n;}
	 
	 return s;
 }
 int H(int l,int r,int n,int a[])
 {
 	int i,m;
 	if(l==r)
 	m=a[l];
 	else if(l+1==r)
	m=a[l]^a[l+1];
	else
	{
	m=a[l]^a[l+1];
	for(i=l+2;i<=r;i++)
 	{m=m^a[i];
	 }
	}
 	
	return m;
 }
 int max(int a,int b)
 {return (a>b)?a:b;
 }
 int min(int a,int b)
 {return(a<b)?a:b;
 }
 int main()
 {
 	int x,j,n,k,a[101];
 	scanf("%d %d",&n,&k);
 	int l[k+1],r[k+1];
 	for(j=1;j<=n;j++)
 	{scanf("%d",&a[j]);
	 }
	for(j=1;j<=k;j++)
	{scanf("%d %d",&l[j],&r[j]);
	 l[j]=l[j]+1;
	 r[j]=r[j]+1;} 
	for(j=1;j<=k;j++)
	{x=H(min(N(l[j],r[j],n,a),M(l[j],r[j],n,a))+1,max(N(l[j],r[j],n,a),M(l[j],r[j],n,a))+1,n,a);
	printf("%d\n",x);	
	 } 
	 return 0;
 	
 }