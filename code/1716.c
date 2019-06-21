#include<stdio.h>


int max(int a,int b)
{
    if(a<b)
    {
        return b;
    }
    else return a;
}
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else return a;
}
int N(int l,int r,int a[],int n)
{
    int t=0,i;
    for(i=l;i<=r;i++)
    {
        t+=a[i];
    }
    return t%n;
}
int M(int l,int r,int a[],int n)
{
    int t=1,i;
    for(i=l;i<=r;i++)
    {
        t=(t%n)*(a[i]%n)%n;
    }
    return t;
}
int H(int l,int r,int a[],int n)
{
    int t=a[l],i;
    for(i=l+1;i<=r;i++)
    {
        t^=a[i];
    }
    return t;
}

int main()
{
    int n,a[101]={0},k,i;
    scanf("%d%d",&n,&k);
    int l[k],r[k],c[k];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
        c[i]=H(min(N(l[i],r[i],a,n),M(l[i],r[i],a,n)),max(N(l[i],r[i],a,n),M(l[i],r[i],a,n)),a,n);
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",c[i]);
    }
    return  0;

}