#include <stdio.h>//fuck
int a[105];
int n;
int N(int l,int r)
{
    int i,sum=0;
    for(i=l;i<=r;i++){
        sum+=a[i];sum%=n;
    }
    return sum;
}
int M(int l,int r)
{
    int i,s=1;
    for(i=l;i<=r;i++){
            s*=(a[i]%n);s%=n;
    }
    return s;
}
int H(int l,int r)
{
    int i,s;
    s=a[l];
    for(i=l+1;i<=r;i++){
            s^=a[i];
    }
    return s;
}
int main()
{
    int K;int l,r;int i;int c,b;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<K;i++){
        scanf("%d%d",&l,&r);

    c=N(l,r); b=M(l,r);
    if(c>b)c^=b^=c^=b;
    printf("%d\n",H(c,b));
    }
    return 0;
}