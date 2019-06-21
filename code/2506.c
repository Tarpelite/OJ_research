#include<stdio.h>
int a[10005];
int d[105];
int main()
{
    int n,k,l,r,N,M,X,Y,H;
    int i=0;
    int j=0;
    int o=0;
    int b=0;
    int p=1;
    int c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(b=0;b<k;b++)
    {
        scanf("%d%d",&l,&r);
        o=0;
        p=1;
        for(j=l;j<=r;j++)
        {
           o=o+a[j];
           N=o%n;
        }
         for(j=l;j<=r;j++)
        {
           p=p*(a[j]%n);
           if(p>=200)
           {
               p=p%n;
           }
           M=p%n;
        }
        X=(N>M)? M:N;
        Y=(N>M)? N:M;
        H=a[X];
        for(j=X+1;j<=Y;j++)
        {
           H=H^a[j];
        }
        d[b]=H;
    }
    for(b=0;b<k;b++)
        printf("%d\n",d[b]);
    return 0;
}