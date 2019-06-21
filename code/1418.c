#include<stdio.h>
#define M 233
int n,k,l,r;
int a[M];

int max(int a,int b)
{
    return a > b ? a : b;
}

int min(int a,int b)
{
    return a > b ? b : a;
}

int getn()
{
    int res = 0;
    for(int i = l;i <= r;i++)
    {
        res += a[i];
        res %= n;
    }
    return res;
}

int getm()
{
    int res = 1;
    for(int i = l;i <= r;i++)
    {
        res *= a[i];
        res %= n;
    }
    return res;
}

int geth()
{
    int res = 0;
    for(int i = l;i <= r;i++)
    {
        res ^= a[i];
    }
    return res;
}


int main(int argc,char** argv)
{
    scanf("%d%d",&n,&k);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= k;i++)
    {
        scanf("%d%d",&l,&r);
        int gn = getn();
        int gm = getm();
        l = min(gn,gm);
        r = max(gn,gm);
        printf("%d\n",geth());
    }
    return 0;
}