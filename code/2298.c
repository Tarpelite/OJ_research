#include<stdio.h>
int N(int,int);
int M(int,int);
int H(int,int); 
int n,a[101],e[101],o[101],t,i,k,l,r,p,q;
int main()
{
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(t=0;t<k;t++)
{
	scanf("%d%d",&l,&r);
	p=N(l,r);
	q=M(l,r);
	if(p<q)
	{o[t]=H(p,q);}
	else
	{o[t]=H(q,p);}
}
for(t=0;t<k;t++)
{
	printf("%d\n",o[t]);
}
return 0;
}
int N(int l,int r)
{
	int b=0;
	int s;
	for(int j=l;j<=r;j++)
	{b=b+a[j];}
	s=b%n;
	return s;
}
int M(int l,int r)
{
	int c=1;
	int f;
	for(int j=l;j<=r;j++)
	{e[j]=a[j]%n;
	c=c*e[j];
	if(c>200){
		c%=n;
	}}
	f=c%n;
	return f;
}
int H(int l,int r)
{
	int d=a[l];
	int g;
	for(int j=l+1;j<=r;j++)
	{d=d^a[j];}
	g=d;
	return g;
}