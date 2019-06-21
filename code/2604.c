#include<stdio.h>
int a[105];
int n;
int N(int l,int r)
{
    int i,sum=0;
    for(i=l;i<=r;i++)
        sum=((sum%n)+(a[i]%n))%n;
    return (sum%n);
}
int M(int l,int r)
{
    int i,sum=1;
    for(i=l;i<=r;i++)
        sum=((sum%n)*(a[i]%n))%n;
    return (sum%n);
}
int H(int l,int r)
{
    int i,sum=a[l];
    for(i=l+1;i<=r;i++)
        sum=sum^a[i];
    return sum;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int K,i,result;
    int l,r;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<K;i++)
    {
        scanf("%d%d",&l,&r);
        result=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
        printf("%d\n",result);
    }
    return 0;
}