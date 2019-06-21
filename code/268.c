#include<stdio.h>
#include<string.h>

    int a[110]={};
    int b[110];
    int n,k,i;
    int l,r,h;
    int min,max;

int N(int l,int r)
{
    int i=l;
    int sum=0;
    while(i<=r)
    {
        sum=sum+a[i];
        i++;
    }
    sum=sum%n;
    return sum;
}

int M(int l,int r)
{
    int sum=1;
    int i=l;
    while(i<=r)
    {
        sum=sum*a[i];
        i++;
        sum=sum%n;
    }
    sum=sum%n;
    return sum;
}

int H(int l,int r)
{
    int sum;
    int i=l+1;
    sum=a[l];
    while(i<=r)
    {
        sum=sum^a[i];
        i++;
    }
    return sum;
}

int main()
{

    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&l,&r);
        min=N(l,r)<M(l,r)?N(l,r):M(l,r);
        max=N(l,r)>M(l,r)?N(l,r):M(l,r);
        h=H(min,max);
        b[i]=h;

    }
    for(i=1;i<=k;i++)
        printf("%d\n",b[i]);
    return 0;
}