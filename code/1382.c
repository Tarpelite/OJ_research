#include <stdio.h>
#include <stdlib.h>

int min_(int m,int n)
{
    int min;
    if(m<=n) min=m;
    else min=n;
    return min;
}

int max_(int m,int n)
{
    int max;
    if(m>=n) max=m;
    else max=n;
    return max;
}

int N_(int l,int r,int a[],int n)
{
    int N=0;
    for(int i=l;i<=r;i++) N=N+a[i];
    N=N%n;
    return N;
}

int M_(int l,int r,int a[],int n)
{
    int M=1;
    for(int i=l;i<=r;i++){
        if(M>=n) M%=n;
        M*=a[i];
    }
    M=M%n;
    return M;
}

int H_(int l,int r,int a[],int n)
{
    int H=a[l];
    for(int i=l+1;i<=r;i++) H=H^a[i];
    return H;
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[150]={0};
    for(int j=0;j<n;j++) scanf("%d",&a[j]);
    int l,r;
    for(int j=1;j<=k;j++){
        scanf("%d %d",&l,&r);
        int fin;
        fin=H_(min_(N_(l,r,a,n),M_(l,r,a,n)),max_(N_(l,r,a,n),M_(l,r,a,n)),a,n);
        printf("%d\n",fin);
    }
    return 0;
}