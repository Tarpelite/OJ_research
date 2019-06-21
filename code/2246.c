#include <stdio.h>
#include <stdlib.h>

int a[100],n;

int N(int l,int r)
{
    int i,sum=0;
    for(i=l;i<=r;i++)
        sum+=a[i];
//    printf("sum=%d\n",sum);
    return sum%n;
}

int M(int l,int r)
{
    int i;
    long long pro=1;
    for(i=l;i<=r;i++){
        pro*=(a[i]%n);
        pro%=n;
    }
//    printf("pro=%d\n",pro);
    return pro%n;
}

int H(int l,int r)
{
    int i,resu;
    resu=a[l];
//    printf("result=%d\n",resu);
    for(i=l+1;i<=r;i++)
        resu=resu^a[i];
//    printf("result=%d\n",resu);
    return resu;
}

int max(int a,int b)
{
    return (a>b?a:b);
}

int min(int a,int b)
{
    return (a<b?a:b);
}

int main()
{
    int k,i,res[100],l,r;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++){
        scanf("%d %d",&l,&r);
        res[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
    }
    for(i=0;i<k;i++)
        printf("%d\n",res[i]);
    return 0;
}