#include<stdio.h>
int N(int x[],int y,int z,int p);
int M(int b[],int c,int d,int q);
int H(int g[],int e,int f);
int main()
{
	int i,n,k,l,r,a[150]={0},x1,x2,x3,max,min,hx;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		x1=N(a,l,r,n);
		x2=M(a,l,r,n);
		
		min=(x1<x2)?x1:x2;
		max=(x1>x2)?x1:x2;
		hx=H(a,min,max);
		printf("%d\n",hx);
	}
} 
int N(int x[],int y,int z,int p)
{
	int j,sumN=0,a;
	for(j=y;j<=z;j++)
	{
	   sumN+=x[j];
	}
	a=sumN%p;
	return a;
}
int M(int b[],int c,int d,int q)
{
 int j,sumM=1;
 for(j=c;j<=d;j++)
   {
 	sumM=((sumM%q)*(b[j]%q))%q; 
    } 
 return sumM;
 } 
 int H(int g[],int e,int f)
 {
 int j,sumH=g[e]; 
 for(j=e+1;j<=f;j++)
 {
 	sumH^=g[j];
 }
 return sumH;
}