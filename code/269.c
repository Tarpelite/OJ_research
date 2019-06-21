#include<stdio.h>
#define min(x,y) x<=y?x:y
#define max(x,y) x>y?x:y
int n,l[1000],r[1000],a[1000],K,i,A,o;
int N(int,int);
int H(int,int);
int M(int,int);
int main()
{   scanf("%d%d",&n,&K);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<K;i++){
   scanf("%d%d",&l[i],&r[i]);
}
for(o=0;o<K;o++){
	A=H(min(N(l[o],r[o]),M(l[o],r[o])),max(N(l[o],r[o]),M(l[o],r[o])));
	printf("%d\n",A);
}
return 0;
}
int N(int l,int r)
{int p=0;
	for(i=l;i<=r;i++)
	{
		p+=a[i];
	}
	return p%n;
}
int M(int l,int r)
{
	int p=1;
	for(i=l;i<=r;i++)
	{
		p=((p%n)*(a[i]%n))%n;
	}
	return p%n;
}
int H(int l,int r)
{
	int p;
	p=a[l];
		for(i=l+1;i<=r;i++)
	{
		p=p^a[i];
	}
	return p;
}