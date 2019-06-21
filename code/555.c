#include<stdio.h>
int main()
{
	int a[105],out[105];
	int N,k,i,j,l,r,x,y,n=0,m=1;
	scanf("%d%d",&N,&k);
	for(i=0;i<N;i++)scanf("%d",&a[i]);
	
	for(i=0;i<k;i++)
	{
		n=0;m=1;
		scanf("%d%d",&l,&r);
		for(j=l;j<=r;j++)
		{
			n=n+a[j];
			n=n%N;
			m=m*a[j];
			m=m%N;
		}
		x=n<m?n:m;
		y=n>m?n:m;
		out[i]=a[x];
		for(j=x+1;j<=y;j++)
		{
			out[i]=out[i]^a[j];
		}
	}
	for(i=0;i<k;i++)printf("%d\n",out[i]);
	return 0;
}