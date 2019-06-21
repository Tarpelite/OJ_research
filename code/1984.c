#include<stdio.h>
int N(int l,int r);
int M(int l,int r);
unsigned long long H(int l,int r);
int b[15000],n;
int main()
{
    int K,i=0,l[150],r[150],a1,b1,t;
    scanf("%d%d",&n,&K);
    while(i<n)
    {
     scanf("%d",&b[i]); 
     i++;
    }
    i=0;
    while(i<K)
    {
     scanf("%d%d",&l[i],&r[i]);
     i++;
	}
	for(i=0;i<K;i++)
	{
	 a1=N(l[i],r[i])%n;
     b1=M(l[i],r[i])%n;
    	if(a1>=b1)
    	{
     	t=H(b1,a1);
                printf("%llu\n",t);
    	}
    	else
    	{
     	t=H(a1,b1);
               	 printf("%llu\n",t);
    	}       
	}
      
    return 0;
}

int N(int l,int r)
{
    int a=0;
    while(l<=r)
    {
    a=(b[l]%n)+a;
    l++;
    }
    return a;
}
int M(int l,int r)
{
    int a=1;
    while(l<=r)
    {
    a=(a*(b[l]%n))%n;
    l++;
    }
    return a;
}
unsigned long long H(int l,int r)
{
    unsigned long long a=b[l];
    while(l<r)
    {
    a=a^b[l+1];
    l++;
    }
    return a;
}