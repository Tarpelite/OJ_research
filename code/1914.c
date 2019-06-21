#include<stdio.h>
int nn(int,int);
int mm(int,int);
int hh(int,int);

int max(int i,int j)
{
    if (i>j)
        return i;
    else
        return j;
}
int min(int i,int j)
{
    if (i<j)
        return i;
    else
        return j;
}
int a[10001];
int n;


int main()
{
    int l,r,k,i;
    int mins;
    int maxs;
    int hs;
    scanf("%d%d",&n,&k);
    for ( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=k;i++)
    {
        scanf("%d%d",&l,&r);
        mins=min(nn(l,r),mm(l,r));
        maxs=max(nn(l,r),mm(l,r));
        hs=hh(mins,maxs);
        printf("%d\n",hs);
    }
    return 0;
}


int nn(int i,int j)
{
    int sum=0;
    int k;
    for (k=i;k<=j;k++)
    {
        sum+=a[k]%n;
    }
    return sum % n;
}
int mm(int i,int j)
{
    int sum=1;
    int k;
    for (k=i;k<=j;k++)
    {
        sum*=a[k]%n;
        sum%=n;
    }
    return sum % n;
}
int hh(int i,int j)
{
    int xx=a[i];
    int k;
    for (k=i+1;k<=j;k++)
    {
        xx=xx^a[k];
    }
    return xx;
}