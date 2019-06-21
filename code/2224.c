#include <stdio.h>
int a[1005];
int N(int l, int r, int n, int a[])//   求N
{
    int ans1, sum=0, i;
    for(i=l; i<=r; i++)
    {
        sum+=a[i];
    }
    ans1=sum%n;
    return ans1;
}
int M(int l, int r, int n, int a[])//   求M
{
    int ans2, sum=1, i;
    for(i=l; i<=r; i++)
        sum=((sum%n)*(a[i]%n))%n;
    ans2=sum;
    return ans2;
}
int do_H(int l, int r, int a[])//   求H
{
    int H, i;
    H=a[l];
    for(i=l; i<r; i++)
        H=H^a[i+1];
    return H;
}
int main()
{
    int n, k, H, min, max, i;
    int l, r;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=k; i++)
    {
        scanf("%d%d",&l,&r);
        min=N(l,r,n,a)<M(l,r,n,a)?N(l,r,n,a):M(l,r,n,a);
        max=N(l,r,n,a)>M(l,r,n,a)?N(l,r,n,a):M(l,r,n,a);
        H=do_H(min,max,a);
        printf("%d\n",H);
    }
    return 0;
}