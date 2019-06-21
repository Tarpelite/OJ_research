#include <stdio.h>
#include <stdlib.h>
int n,k,i,j,a[101],l[101],r[101];
int N(int x);
int M(int y);
int H(int b,int c);
int min(int p,int q);
int max(int s,int t);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=k;i++)
	scanf("%d%d",&l[i],&r[i]);
	for(i=1;i<=k;i++)
	printf("%d\n",H(min(N(i),M(i)),max(N(i),M(i))));
	return 0;
}
	int N(int x)
	{
		int sum;
		sum=0;
		for(j=l[x];j<=r[x];j++)
		sum+=a[j];
		return sum%n;
	}
	int M(int y)
	{
		int cheng;
		cheng=1;
		for(j=l[y];j<=r[y];j++)
		{
			cheng*=a[j];
			while(cheng>n)
				cheng-=n;
		}
		return cheng%n;
	}
	
	int min(int p,int q)
	{
		if(p<q)
		return p;
		else
		return q; 
	}
	int max(int s,int t)
	{
		if(s<t)
		return t;
		else
		return s;
	}
	int H(int b,int c)
	{
		int yihuo;
		yihuo=a[b];
		for(j=b+1;j<=c;j++)
			yihuo=yihuo^a[j];
		return yihuo;
	}