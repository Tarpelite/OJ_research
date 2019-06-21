#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int a[110],n,k,l,r;
int min(int a,int b)
{
    return a>b?b:a;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int Ni(int l,int r)
{
    int sum=0;
    int i;
    for(i=l;i<=r;i++)
        sum+=a[i];
    return sum%n;
}
int Mi(int l,int r)
{
    int ji=1;
    int i;
    for(i=l;i<=r;i++)
        ji=(ji*a[i])%n;
    return ji;
}
int Hi(int l,int r)
{
    int yun=0;
    int i;
    for(i=l;i<=r;i++)
        yun=yun^a[i];
    return yun;
}
void solve(int l,int r)
{
    printf("%d\n",Hi(min(Ni(l,r),Mi(l,r)),max(Ni(l,r),Mi(l,r))));
}

int main()
{
    int i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<k;j++)
    {
        scanf("%d%d",&l,&r);
        solve(l,r);
    }
    return 0;
}