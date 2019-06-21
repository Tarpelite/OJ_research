#include<stdio.h>

int a[10000],n;
int N(int,int);
int M(int,int);
int H(int,int);
int max(int,int);
int min(int,int);

int main()
{int k,m,l,r,i;
	scanf("%d %d",&n,&k);
	for (i=0;i<=n-1;i++)
		{scanf("%d",&a[i]);}
	for (i=1;i<=k;i++)
		{scanf("%d %d",&l,&r);
		 m=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		 printf("%d\n",m);
		}
	return 0;	
}

int N(int l1,int r1)
{int sum1=0;
	for (int i=l1;i<=r1;i++)
		{sum1=(sum1+a[i])%n;}
 return sum1;
}

int M(int l2,int r2)
{int sum2=1;
	for (int i=l2;i<=r2;i++)
		{sum2=(sum2*a[i])%n;}
	sum2=sum2%n; 
 return sum2;
}

int H(int l3,int r3)
{int sum3=0;
	sum3=a[l3];
	for (int i=l3+1;i<=r3;i++)
		{sum3=sum3^a[i];}
 return sum3;
}

int min(int s1,int t1)
{if (s1>=t1)
	return t1;
 else
 	return s1;
}

int max(int s2,int t2)
{if (s2>=t2)
	return s2;
 else
 	return t2;
}