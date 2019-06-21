#include<stdio.h>
int N(int,int);
int M(int,int);
int H(int,int);
int s[200],i,n;
int main()
{
	int k,a,b,w,l[100],r[100],o;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<k;i++) scanf("%d%d",&l[i],&r[i]);
		for(i=0;i<k;i++)
		{o=i;
			a=N(l[o],r[o])<=M(l[o],r[o])?N(l[o],r[o]):M(l[o],r[o]);
			b=N(l[o],r[o])>M(l[o],r[o])?N(l[o],r[o]):M(l[o],r[o]);
			w=H(a,b);
			printf("%d\n",w);
			i=o;
		}
	return 0;
}
int N(int l,int r)
{int p=0;
	for(i=l;i<=r;i++)
	{
		p+=s[i];
	}
	return p%n;
}
int M(int l,int r)
{
	int p=1;
	for(i=l;i<=r;i++)
	{
		p=((p%n)*(s[i]%n))%n;
	}
	return p%n;
}
int H(int l,int r)
{
	int p;
	p=s[l];
		for(i=l+1;i<=r;i++)
	{
		p=p^s[i];
	}
	return p;
}