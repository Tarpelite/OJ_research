#include<stdio.h>
#include<stdlib.h>
int data[101]; 
int H(int,int);
int N(int,int,int);
int M(int,int,int);
int min(int,int);
int max(int,int);
int main()
{
	int m,n,i,k;
	int l[101],r[101];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&data[i]);
	for(i=0;i<k;i++)
	scanf("%d %d",&l[i],&r[i]);
	for(i=0;i<k;i++)
	{
		m=H(min(N(l[i],r[i],n),M(l[i],r[i],n)),max(N(l[i],r[i],n),M(l[i],r[i],n)));
		printf("%d\n",m);
	}
	return 0;
}
int N (int a,int b,int c)
{
	int i,s1=0;
	for(i=a;i<=b;i++)
	{
		s1+=data[i];
	}
	s1%=c;
	return s1;
}
int M(int a,int b,int c)
{
	int i;
	long long s2=1;
	for(i=a;i<=b;i++)
	{
		s2*=(data[i]%c);
		s2%=c;
	} 
	return s2;
}
int H(int a,int b)
{
	int i,s3=0;
	for(i=a;i<=b;i++)
	{
		s3^=data[i];
	}
	return s3;
}
int min(int a,int b)
{
	return a<=b ? a : b;
}
int max(int a,int b)
{
	return a>=b ? a : b;
}