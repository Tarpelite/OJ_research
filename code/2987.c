#include <stdio.h>
int N(int b1,int c1,int l1,int n1);
int M(int b2,int c2,int l2,int n2);
int H(int x,int y);
int min1(int x1,int y1);
int max1(int x2,int y2);
int n;
int a[100000],b[10000],c[10000];
int main()
{
	
	int l,r,k,m,o,i=0,min,max,Nr,Mr;
	scanf("%d %d",&n,&k);
	m=n;

	while(m--)
	
	{
		scanf("%d",&a[i]);
		i++;
	}
	o=k;
	i=0;
	while(o--)
	{
		scanf("%d %d",&b[i],&c[i]);
		i++;
	}
	for(i=0;i<=k-1;i++)
	{
		Nr=N(b[i],c[i],i,n);
		Mr=M(b[i],c[i],i,n);
		min=min1(Nr,Mr);
		max=max1(Nr,Mr);
		r=H(min,max);
		printf("%d\n",r);
	}
	
	return 0;
 } 
int N(int b1,int c1,int l1,int n1)
{
	
	int j1;
	int rn=0;
	for(j1=b1;j1<=c1;j1++)
	rn+=a[j1];
	rn=rn%n1;
	return rn;
}
int M(int b2,int c2,int l2,int n2)
{
	int j2;
	int rm=1;
	for(j2=b2;j2<=c2;j2++)
	rm=rm*a[j2]%n2;
	
	return rm;
}
int H(int x,int y)
{
	int j3=x,rh;
	rh=a[j3];
	j3++; 
	for(j3;j3<=y;j3++)
	rh=rh^a[j3];
	return rh;
	
}
int min1(int x1,int y1)
{
	if(x1<y1)
	return x1;
	else
	return y1; 
}
int max1(int x2,int y2)
{
	if(x2>y2)
	return x2;
	else
	return y2;
}