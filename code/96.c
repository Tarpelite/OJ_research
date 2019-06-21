#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int main()
{
    int n,k,a[20000]={0},i,N=0,M=1,H,l,r;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(k--){
    N=0,M=1;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++){
        N+=a[i]%n;
        N%=n;
        M*=a[i]%n;
        M%=n;
    }
    l=min(N,M),r=max(N,M);
    H=a[l];
    for(i=l+1;i<=r;i++)
      H=H^a[i];
    printf("%d\n",H);
    }
    return 0;
}