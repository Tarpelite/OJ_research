#include <stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)

int a[10000];
int n,K;

int N(int l,int r)
{
    int m=0;
    for(int i=l;i<=r;i++){
        m+=a[i]%n;
    }

    return m%n;
}

int M(int l,int r)
{
    int m=1;
    for(int i=l;i<=r;i++){
        m=m*a[i]%n;
    }

    return m%n;
}

int H(int l,int r)
{
    int m=a[l];
    for(int i=l+1;i<=r;i++){
        m^=a[i];
    }
    return m;
}

int main()
{
    scanf("%d%d",&n,&K);
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }

    int b[10000];
    int l,r;

    for(int i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
    }

    for(int i=0;i<K;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}