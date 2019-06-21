#include <stdio.h>
#include <stdlib.h>
int a[10010];
int N(int l,int r,int a[],int n)
{
      int k=0,i;
    for (i=l;i<=r;i++)
    {

        k=(k+a[i])%n;
    }
    return k;
}
int M(int l,int r,int a[],int n)
{
     int k=1,i;
     for (i=l;i<=r;i++)
    {

        k=(k*a[i])%n;
    }
    return k;

}
int H(int l,int r,int a[],int n)
{
    int k=a[l],i;
    for (i=l+1;i<=r;i++)
    {
        k=k^a[i];
    }
    return k;

}
int main()
{
    int n,K,v,h,i,l,r,c;
    scanf("%d %d",&n,&K);
    for (i=0;i<n;i++)
    {
        scanf("%d",&c);
        a[i]=c;
    }

    for (i=0;i<K;i++)
    {
        scanf("%d %d",&l,&r);
        if (N(l,r,a,n)>M(l,r,a,n))
    {
        v=M(l,r,a,n);
        h=N(l,r,a,n);
    }
    else
    {
        v=N(l,r,a,n);
        h=M(l,r,a,n);
    }
    printf("%d\n",H(v,h,a,n));
    }



    return 0;
}