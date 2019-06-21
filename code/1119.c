#include <stdio.h>
int N (int l,int r,int a[],int n);
int M (int l,int r,int a[],int n);
int H (int min,int max,int a[]);


int main()
{
    int i,a[102]={0},n,K,l,r,min,max,n0,m0,re,m1,n1;
    scanf ("%d %d",&n,&K);
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (i=0;i<K;i++)
    {
        scanf ("%d %d",&l,&r);
        n0 = N (l,r,a,n);
        m0 = M (l,r,a,n);
        m1 = m0 %n;
        n1 = n0 %n;
        min=n1<m1?n1:m1;
        max=n1<m1?m1:n1;
        re=H (min,max,a);
        printf ("%d\n",re);
    }
    return 0;
}
int N (int l,int r,int a[],int n)
{
    int ans=0,i;
    for (i=l;i<=r;i++)
    {
        ans=ans+(a[i]%n);
        ans=ans%n;
    }
    return ans;
}

int M (int l,int r,int a[],int n)
{
    int ans=1,i;
    for (i=l;i<=r;i++)
    {
        ans=ans*a[i];
        ans=ans%n;
    }
    return ans;
}
int H (int min,int max,int a[])
{
    int ans,j;
    ans=a[min];
    for (j=min+1;j<=max;j++)
    {
        ans=ans^a[j];
    }
    return ans;
}