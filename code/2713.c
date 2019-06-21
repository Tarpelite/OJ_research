#include<stdio.h>
int main()
{
    int n,k,i,j,l,r,b,c,s,d;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&l,&r);
        b=0;c=1;
        for(j=l;j<=r;j++)
        {
            b=b+a[j];
        }
        b=b%n;
        for(j=l;j<=r;j++)
        {
            c=(c*a[j])%n;
        }
        if(b>c)
        {
            s=b;
            b=c;
            c=s;
        }
        if(b==c)
            d=a[b];
        else
        {
        d=a[b]^a[b+1];
        for(j=b+2;j<=c;j++)
        {
            d=d^a[j];
        }
        }
        printf("%d\n",d);
    }
    return 0;

}