#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int a[10005],s;
int n(int l,int r)
{
    int sum=0,i;
    for(i=l;i<=r;i++)
    {
        sum+=a[i]%s;
    }
    return sum%s;
}
int m(int l,int r)
{
    int sum=1,i;
    for(i=l;i<=r;i++)
    {
        sum=((sum%s)*(a[i]%s))%s;
    }
    return sum;
}
int h(int l,int r)
{
    int sum=a[l],i;
    for(i=l+1;i<=r;i++)
    {
        sum=sum^a[i];
    }
    return sum;
}

int main()
{
    int i,j,k,l,r;
    scanf("%d%d",&s,&k);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
    {
        scanf("%d%d",&l,&r);
        printf("%d\n",h(min(n(l,r),m(l,r)),max(n(l,r),m(l,r))));
    }
    return 0;
}