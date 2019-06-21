#include<stdio.h>
int N(int,int);
int M(int,int);
int H(int,int);
int max(int,int);
int min(int,int);
int a[10001]={0};
int n;
int main()
{
	int K;
	int l[101]={0};
	int r[101]={0};
	int i=0;
	scanf("%d%d",&n,&K);
	while(i<n)
	{
		scanf(" %d",&a[i]);
		i++;
	}
    i=0;
    while(i<K)
	{
		scanf(" %d%d",&l[i],&r[i]);
		i++;
	}
	i=0;
	while(i<K)
	{
		printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
		i++;
	}
	return 0;
}

int N(int x,int y)
{
	int jieguo=0;
	int j;
	j=x;
	while(j<=y)
	{
		jieguo=jieguo+a[j]%n;
		j++;
	}
	jieguo=jieguo%n;
	return jieguo;
}
int M(int x,int y)
{
	int jieguo=1;
	int j;
	j=x;
	while(j<=y)
	{
		jieguo=jieguo*a[j]%n;
		j++;
	}
	jieguo=jieguo%n;
	return jieguo;
}
int H(int x,int y)
{
	int jieguo;
	int j;
	j=x+1;
	jieguo=a[x];
	while(j<=y)
	{
		jieguo=jieguo^a[j];
		j++;
	}
	return jieguo;
}
int max(int x,int y)
{
	if(x<y)
	{
		return y;
	}
	else
	return x;
}
int min(int x ,int y)
{
	if(x<y)
	{
		return x;
	}
	else
	return y;
}