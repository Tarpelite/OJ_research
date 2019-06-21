#include <stdio.h>
int a[30000];
int n;
int N(int l,int r)
{
    int i,m=0;
    for(i=l;i<=r;i++)
        m=m+a[i];
    return m%n;
}
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
    int i,m=0;
    for(i=l;i<=r;i++)
        m=m^a[i];
    return m;
}

int main()
{

    int i,k,d[1000],e[1000];
    scanf("%d%d", &n, &k);
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
        for(i=1;i<=k;i++)
            scanf("%d%d",&d[i],&e[i]);
        for(i=1;i<=k;i++)
       {
        if(N(d[i],e[i])>M(d[i],e[i]))
        printf("%d",H(M(d[i],e[i]),N(d[i],e[i])));
        else
        printf("%d",H(N(d[i],e[i]),M(d[i],e[i])));
        if(i!=k)printf("\n");
       }

    return 0;
}