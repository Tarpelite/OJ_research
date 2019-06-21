#include<stdio.h>

int n(int l,int r,int n,int *c);
int m(int l,int r,int n,int *c);
int s(int cas,int l,int r);
int l(int l,int r,int n,int *c);

int main(void)
{
	int a,b,i,x,y,x1,y1;
	scanf("%d%d",&a,&b);
	int c[a];
	for(i=0;i<a;i++){scanf("%d",&c[i]);}
	for(i=0;i<b;i++)
	{
		scanf("%d%d",&x,&y);
		x1=s(1,n(x,y,a,c),m(x,y,a,c));
		y1=s(2,n(x,y,a,c),m(x,y,a,c));
		printf("%d\n",l(x1,y1,a,c));
	}
	return 0;
}

int n(int l,int r,int n,int *c)
{
	int j,sum=0;
	for(j=l;j<=r;j++)
	{
		sum+=c[j];
		sum%=n;
	}
	return sum;
}

int m(int l,int r,int n,int *c)
{
	int j,sum=1;
	for(j=l;j<=r;j++)
	{
		sum*=c[j];
		sum%=n;
	}
	return sum;
}

int s(int cas,int l,int r)
{
	switch(cas)
	{
		case 1:return((l>r)?r:l);
		default:return((l>r)?l:r);
	}
}

int l(int l,int r,int n,int *c)
{
	int j,sum=c[l];
	for(j=l+1;j<=r;j++){sum^=c[j];}
	return sum;
}