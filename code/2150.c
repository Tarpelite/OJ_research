#include<stdio.h>
int main()
{
	int n,K,a[101],l[101],r[101],i,j,b,c,d,h[101],k,s;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=K;j++)
	{
		scanf("%d%d",&l[j],&r[j]);
		b=0;
		c=1;
		for(k=l[j];k<=r[j];k++)
		{
			b=b+a[k];
			c=c*a[k];
			if(c>n)
			c=c%n;
		}
		b=b%n;
		if(b>c)
		{
			d=b;
			b=c;
			c=d;
		}
		h[j]=0;
		for(s=b;s<=c;s++)
		h[j]=h[j]^a[s];
	}
	for(j=1;j<=K;j++)
	printf("%d\n",h[j]);
	return 0;
}