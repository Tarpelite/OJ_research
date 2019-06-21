#include<stdio.h>

int a[10000], n;
int N(int l,int r);
int M(int l,int r);
int H(int l1,int r1);
int min(int a,int b);
int max(int a,int b);

int main(){
	int K, i;
	scanf("%d %d",&n, &K);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	int l, r, m, a1, a2, a3, a4 ;
	for(i=0;i<K;i++)
	{
		scanf("%d %d",&l, &r);
		m=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n",m);
	}

	return 0;
}

int N(int l,int r)
{
	int sum=0;
	for(int j=l;j<=r;j++)
	    sum=(sum+a[j])%n;
	return sum;    
}

int M(int l,int r)
{
	int ji=1;
	for(int j=l;j<=r;j++)
	    ji=(ji*a[j])%n;
	return ji;   
}

int H(int l,int r)
{
	int yi=0;
	for(int j=l;j<=r;j++)
	    yi=yi^a[j];
	return yi;    
}

int min(int a,int b)
{
	if(a<b)
	    return a;
	else
	    return b;
}

int max(int a,int b)
{
	if(a>b)
	    return a;
	else
	    return b;
}