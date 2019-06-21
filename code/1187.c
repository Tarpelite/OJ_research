#include<stdio.h>

int main()
{   int nlr(int a[],int l,int r,int n);
    int mlr(int a[],int l,int r,int n);
    int hlr(int a[],int l,int r);
    int max(int a,int b);
    int min(int a,int b);

	int n,k,a[20000],l,r,i,j,b[103],c,d,e,f;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<k;j++){
		scanf("%d %d",&l,&r);
		c=nlr(a,l,r,n)%n;
		d=mlr(a,l,r,n)%n;
		e=min(c,d);
		f=max(c,d);
		b[j]=hlr(a,e,f);
	}
	for(j=0;j<k;j++)
		printf("%d\n",b[j]);
	return 0;
}
int nlr(int a[],int l,int r,int n)
{
	int sum=0,i;
	for(i=l;i<=r;i++){
		sum=(sum+(a[i]%n))%n;
	}
	return sum;
}
int mlr(int a[],int l,int r,int n)
{
	int sum=1,i;
	for(i=l;i<=r;i++)
		sum=(sum*(a[i]%n))%n;
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
	return(a<b?a:b);
}
int max(int a,int b)
{
    return(a>b?a:b);
}