#include<stdio.h>
#define min(a,b) (a<=b)?a:b
#define max(a,b) (a<=b)?b:a

int N(int l, int r, int n, int a[]);
int M(int l, int r, int n, int a[]);
int H(int l, int r, int a[]);

int main()
{
    int n, K, i, l[200], r[200];
    scanf("%d%d", &n, &K);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<=K;i++)
    {
        scanf("%d%d", &l[i], &r[i]);
    }
    for(i=1;i<=K;i++)
    {
        printf("%d\n", H(min(N(l[i],r[i],n,a),M(l[i],r[i],n,a)),max(N(l[i],r[i],n,a),M(l[i],r[i],n,a)),a));
    }
    return 0;
}

int N(int l, int r, int n, int a[])
{
    int n_res=0, i;
    for(i=l;i<=r;i++)
    {
        n_res+=a[i]%n;
    }
    return n_res%n;
}

int M(int l, int r, int n, int a[])
{
    int m_res=1, i;
    for(i=l;i<=r;i++)
    {
        m_res=((m_res%n)*(a[i]%n))%n;
    }
    return m_res%n;
}

int H(int l, int r, int a[])
{
    int h_res=a[l], i;
    if(l==r)
        return a[l];
    else
    {
        for(i=l+1;i<=r;i++)
    {
        h_res^=a[i];
    }
    return h_res;
    }

}