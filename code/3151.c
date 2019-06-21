#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int  a[100]= {0},n ;
int N(int l,int r)
{
    int s = 0, j = l ;
    for(; j<=r; j++)
    {
        s+=a[j];
    }
    return s%n;
}

int M(int l,int r)
{
    int s = 1, j = l ;
    for(; j<=r; j++)
    {
        s=(s*a[j])%n;
    }
    return s%n;
}

int H(int l,int r)
{
    int s = 0, j = l ;
    for(; j<=r; j++)
    {
        s^=a[j];
    }
    return s;
}

int main()
{
    int  k, i = 0, l[100]= {0}, r[100]= {0}, ma,mi;
    scanf("%d%d", &n, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<k; i++)
    {
        scanf("%d%d", &l[i], &r[i]);
    }
    for(i=0; i<k; i++)
    {
        ma=max(N(l[i],r[i]),M(l[i],r[i]));
        mi=min(N(l[i],r[i]),M(l[i],r[i]));
        printf("%d\n",H(mi,ma));
    }
    return 0;
}