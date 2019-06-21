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

/*int M(int l,int r,int n)
{
    int pro,i;
    for(pro=1,i=l;i<=r;i++)
    {
        pro=pro*(i+1);pro=pro%n;
    }
    return pro;
}*/
int M(int l,int r)
{
    int i,m=1,q=1;
    for(i=l;i<=(r+l)/2;i++)
        {m=m*a[i];
        m=m%n;}
        for(i;i<=r;i++)
            {q=q*a[i];
        q=q%n;}
        m=(m*q)%n;

    return m;
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
        if(N(l[j],r[j],n)<=M(l[j],r[j]))
            min=N(l[j],r[j],n),max=M(l[j],r[j]);
        else
            max=N(l[j],r[j],n),min=M(l[j],r[j]);
        printf("%d",H(min,max));
        if(j!=k)
            printf("\n");
       }
       return 0;
    }