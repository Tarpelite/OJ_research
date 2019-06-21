#include<stdio.h>
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
int a[100]={0},n,k;
int N(int,int);
int H(int,int);
int M(int,int);
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l,r,big,small;
    for(int i=0;i<k;i++)
    {
        scanf("%d%d",&l,&r);

        big=max(N(l,r),M(l,r));
        small=min(N(l,r),M(l,r));
        printf("%d\n",H(small,big));
    }
}
int N(int l,int r)
{
    int i=0,pn=0;
    for(i=l;i<=r;i++)
    {
        pn=(pn+a[i]%n)%n;
    }
    return pn;
}
int M(int l,int r)
{
    int i=0,m=1;
    for(i=l;i<=r;i++)
    {
        m=((m%n)*(a[i]%n))%n;
    }
    return m;
}
int H(int l,int r)
{
    int i=0,h=a[l];
    for(i=l+1;i<=r;i++)
    {
        h=h^a[i];
    }
    return h;
}