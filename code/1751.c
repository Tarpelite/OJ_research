#include<stdio.h>


int main()
{
    int n,k,a[10005],l[105],r[105],i,x=0,y=1;
    long long ans;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<k;i++)
    {
        int j;
        for(j=l[i];j<=r[i];j++)
        {
            x=(x+a[j])%n;
            y=(y*a[j])%n;
        }
        if(y<x)
        {
            int t;
            t=x;
            x=y;
            y=t;
        }
        ans=a[x];
        for(j=x;j<y;j++)
        {
            ans=ans^a[j+1];
        }
        printf("%lld\n",ans);
        x=0;y=1;
    }
}