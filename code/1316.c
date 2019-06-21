#include<stdio.h> 
int n,k,a[101],l[101],r[101];
int N(int x);
int M(int y);
int H(int c,int d);
int min(int p1,int q1);
int max(int p2,int q2);
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=k;i++)
		scanf("%d%d",&l[i],&r[i]);
	for(int i=1;i<=k;i++)
		printf("%d\n",H(min(N(i),M(i)),max(N(i),M(i))),N(i),M(i));
	return 0;
}
int N(int x)
{
	int sum;
	sum=0;
	for(int j=l[x];j<=r[x];j++)
		sum+=a[j];
	return sum%n;
}
int M(int y)
{
	int sum2;
	sum2=1;
	for(int j=l[y];j<=r[y];j++)
		{
			sum2*=a[j];
			while(sum2>n)
				sum2-=n;
		}
	return sum2%n;
}
int H(int c,int d)
{
	int sum3;
	sum3=a[c];
	for(int j=c+1;j<=d;j++)
		sum3=sum3^a[j];
	return sum3;
}
int min(int p1,int q1)
{
	if(p1<q1)
		return p1;
	else
		return q1;
}
int max(int p2,int q2)
{
	if(p2>q2)
		return p2;
	else
		return q2;
}