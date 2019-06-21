#include<stdio.h>
int N(int l,int r,int a[],int n)
{
	int i,ans=0;
	for(i=l;i<=r;i++)
	{
		ans=((ans%n)+(a[i]%n));
	}
	
	return ans%n;
	
}
int M(int l,int r,int a[],int n)
{
	int i,ans=1;
	for(i=l;i<=r;i++)
	{
		ans=((ans%n)*(a[i]%n));
	}
	return ans%n;
}
int H(int l,int r,int a[],int n) 
{
	int i,sum;
	sum=a[l];
	for(i=l+1;i<=r;i++)
	{
	sum=sum^a[i];
	}
	return sum;
}
int max(int a,int b)
{
	if(a>=b) return a;
	if(a<b) return b;
}
int min(int a,int b)
{
	if(a>=b) return b;
	if(a<b) return a;
}
int main()
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l[k],r[k];
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
	int x,y,c,d,ans;
	for(i=0;i<k;i++)
	{
		x=N(l[i],r[i],a,n);
		y=M(l[i],r[i],a,n);
		c=min(x,y);
		d=max(x,y);
		ans=H(c,d,a,n);
		printf("%d\n",ans);
	 } 
	
 }