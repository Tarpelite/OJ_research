#include <stdio.h>
#include <stdlib.h>
int a[1000];
int N(int l,int r,int n)
{
    int i,m=0;
    for(i=l;i<=r;i++){
        m=m+a[i];
    }
    m=m%n;
    return m;
}
int M(int l,int r,int n)
{
    int i,m=1;
    for(i=l;i<=r;i++){
        m=(m*a[i])%n;
    }
    return m;
}
int H(int l,int r,int n)
{
    int i,m=0;
    for(i=l;i<=r;i++){
        m=m^a[i];
    }
    return m;
}
int MAX(int x,int y)
{
    int max=x;
    if(x>y) max=x;
    else max=y;
    return max;
}
int MIN(int x,int y)
{
    int min=x;
    if(x<y) min=x;
    else min=y;
    return min;
}

int main()
{
    int n,K;
    scanf("%d%d",&n,&K);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int a_2[10000],l,r,max_1=0,min_1=0;
    for(i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        max_1=MAX(N(l,r,n),M(l,r,n));
        min_1=MIN(N(l,r,n),M(l,r,n));
        a_2[i]=H(min_1,max_1,n);
    }
    for(i=0;i<K;i++){
        printf("%d\n",a_2[i]);
    }
    return 0;
}