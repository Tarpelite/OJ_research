#include <stdio.h>
#include <math.h>
#include <string.h>
//Copyright WZX 2019

int n,k,i,j;
int a[10009];
int l[109],r[109];

int N(int l,int r,int n)
{
    int sum;
    for(sum=0,i=l;i<=r;i++)
    {
        sum=sum+a[i];
    }
    sum=sum%n;
    return sum;
}

int M(int l,int r,int n)
{
    int pro,i;
    for(pro=1,i=l;i<=r;i++)
    {
        pro=pro*a[i];pro=pro%n;
    }
    return pro;
}

int H(int l,int r)
{
    int andor=0;
    for(int i=l;i<=r;i++)
    {
        andor=andor^a[i];
    }
    return andor;
}

int main()
{
    int min,max;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=k;j++)
    {
        scanf("%d%d",&l[j],&r[j]);
    }
    for(j=1;j<=k;j++)
    {
        if(N(l[j],r[j],n)<=M(l[j],r[j],n))
            min=N(l[j],r[j],n),max=M(l[j],r[j],n);
        else
            max=N(l[j],r[j],n),min=M(l[j],r[j],n);
        printf("%d\n",H(min,max));
    }
  return 0;
}