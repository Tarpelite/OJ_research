#include<stdio.h>
int a[101],n;
int p(int l,int r)
{
    int i,j=a[l];
    for(i=l+1;i<=r;i++)
    {
      j=(j%n)+(a[i]%n);
    }
    j=j%n;
    return j;
}
int m(int l,int r)
{
    int i,j=a[l];
    for(i=l+1;i<=r;i++)
    {
       j=(j%n)*(a[i]%n);
    }
    j=j%n;
    return j;
}
int h(int l,int r)
{
    int i,j=a[l];
    for(i=l+1;i<=r;i++)
    {
        j=j^a[i];
    }
    return j;
}
int main()
{
    int k,i,b,c,j,l,r,d;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
    {
       scanf("%d%d",&l,&r);
       b=p(l,r);c=m(l,r);
       if(b>=c)
           d=h(c,b);
           else
            d=h(b,c);
           printf("%d\n",d);
    }
}