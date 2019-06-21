#include<stdio.h>
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int a[10000],n;
int main()
{
	int i,K,N1,M1,H1,max,min;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	int l,r,b[10000];
    for(i=0;i<K;i++)
    {
    	scanf("%d%d",&l,&r);
    	N1=N(l,r);
    	M1=M(l,r);
    	max=N1>M1?N1:M1;
    	min=N1<M1?N1:M1;
    	H1=H(min,max);
    	b[i]=H1;
    }
    for(i=0;i<K;i++)
        printf("%d\n",b[i]);
    return 0;
    
}

int N(int l,int r)
{
	int i,sum=0; 
	for(i=l;i<=r;i++)
	{
		sum+=a[i]%n;
		sum=sum%n; 
		
	}
	return sum;   //shit!题目意思是先相加或相乘 再取模 
}

int M(int l,int r)
{
	int i,mul=1;
	for(i=l;i<=r;i++)
	{
		mul*=a[i]%n;
		mul%=n;
	}
	return mul;
}

int H(int l,int r)
{
	int i,XOR;
	for(XOR=0,i=l;i<=r;i++)
	{
		XOR=XOR^a[i];
	}
	return XOR;
}