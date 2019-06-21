#include <stdio.h>
#include <math.h>

int M(int a[],int n,int l,int r)
{
    int i, sum=1;
    for(i=l;i<=r;i++){
        sum=sum*a[i]%n;}
    return sum;
}
int N(int a[],int n, int l,int r)
{
    int i, sum=0;
    for(i=l;i<=r;i++){
       sum=sum+a[i];
       }
    return sum%n;
}
int H(int a[],int n,int l,int r)
{
    int i, b=a[l];
    for(i=l+1;i<=r;i++){
        b=b^a[i];
    }
    return b;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    return b;
}
int min(int a, int b)
{
    if(a<b)
        return a;
    return b;
}
int main()
{
    int n, k, a[1000],l[1000],r[1000],i;
    int nn[1000], mm[1000], hh[1000] ,p[1000], q[1000];

    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<k;i++){
        nn[i]=N(a,n,l[i],r[i]);
        mm[i]=M(a,n,l[i],r[i]);
        p[i]=min(nn[i],mm[i]);
        q[i]=max(nn[i],mm[i]);
        hh[i]=H(a,n,p[i],q[i]);
    }
    for(i=0;i<k;i++){
        printf("%d\n",hh[i]);
    }
    return 0;
}