#include<stdio.h>
int n,K;
int A[105];
int max();
int min();
int N();
int M();
int H();
int main()
{

    scanf("%d%d",&n,&K);
    int i;int l[105],r[105];int ans;
    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=0;i<K;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    for (i=0;i<K;i++)
    {   int a1=N(l[i],r[i]);int a2=M(l[i],r[i]);
        ans=H(min(a1,a2),max(a1,a2));
        printf("%d\n",ans);
    }

}

int max (int a,int b)
{
    if (a>b)return a;
    else return b;
}

int min (int a,int b)
{
    if (a<b) return a;
    else return b;
}

int N(int l,int r)
{
    int i;int s=0;
    for (i=l;i<=r;i++)
    {
        s+=A[i];
        s%=n;
    }
    return s;
}

int M(int l, int r)
{
    int i;int s=1;
    for (i=l;i<=r;i++)
    {
        s*=A[i];
        s%=n;
    }

    return s;
}

int H(int l, int r)
{
    int i;int s=A[l];
    for (i=l+1;i<=r;i++)
    {
        s=s^A[i];
    }
    return s;
}