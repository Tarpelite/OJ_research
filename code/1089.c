#include<stdio.h>
int nlr(int a[],int l,int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++){
		sum=sum+a[i];
	}
	return sum;
}
int mlr(int a[],int l,int r,int n)
{
	int sum=1,i;
	for(i=l;i<=r;i++)
		{sum=sum*(a[i]%n);
		sum=sum%n;}
	return sum;
}
int hlr(int a[],int l,int r)
{
	int sum=a[l],i;
	for(i=l+1;i<=r;i++)
		sum=sum^a[i];
	return sum;
}
int min(int a,int b)
{
	int min=a;
	if(a>b)
		min=b;
	return min;
}
int max(int a,int b)
{
	int max=a;
	if(a<b)
		max=b;
	return max;
}
int main()
{
	int n,k,a[10005],l,r,i,j,b[105],c,d,e,f,m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<k;j++)
        {
		scanf("%d%d",&l,&r);
		c=nlr(a,l,r)%n;
		d=mlr(a,l,r,n)%n;
		e=min(c,d);
		f=max(c,d);
		b[j]=hlr(a,e,f);
	}
	for(m=0;m<k;m++)
		printf("%d\n",b[m]);
	return 0;
}