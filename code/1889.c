#include<stdio.h>
int N(int,int,int,int a[]);
int M(int,int,int,int a[]);
int H(int,int);
int max(int,int);
int min(int,int);
int a[101]={0};
int main()
{
	int n,k,l[101]={0},r[101]={0},i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		scanf("%d%d",&l[i],&r[i]);
	for(i=0;i<k;i++)
	{
		l[k]=min(N(l[i],r[i],n,a),M(l[i],r[i],n,a));
		r[k]=max(N(l[i],r[i],n,a),M(l[i],r[i],n,a));
		printf("%d\n",H(l[k],r[k]));
	}
	return 0;	
}
int N(int x,int y,int z,int a[])
{
	int k,add=0;
	for(k=x;k<=y;k++)
		add+=a[k];
	add=add%z;
	return add;	
}
int M(int x,int y,int z,int a[])
{
	int k,mul=1;
	for(k=x;k<=y;k++)
		mul=mul*a[k]%z;
	return mul;
}
int min(int x,int y)
{
	if(x>y)
		return y;
	else
		return x;	
}
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int H(int x,int y)
{
	int k,h=a[x];
	for(k=x+1;k<=y;k++)
		h^=a[k];
	return h;		
}