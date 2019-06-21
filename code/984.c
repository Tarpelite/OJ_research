#include<stdio.h>
int main()
{
	int n,K,m[101],l[101],r[101],i,j,a,c,d,h[101],k,s;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(j=1;j<=K;j++)
	{
		scanf("%d%d",&l[j],&r[j]);
		a=0;
		c=1;
		for(k=l[j];k<=r[j];k++)
		{
			a=a+m[k];
			c=c*m[k];
			if(c>n)
			c=c%n;
		}
		a=a%n;
		if(a>c)
		{
			d=a;
			a=c;
			c=d;
		}
		h[j]=0;
		for(s=a;s<=c;s++)
		h[j]=h[j]^m[s];
	}
	for(j=1;j<=K;j++)
	printf("%d\n",h[j]);
	return 0;
}