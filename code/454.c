#include <stdio.h>
#define mx(a,b) a>b?a:b
#define in(a,b) a<b?a:b

int main()
{
    int um,k,a[20000]={0},i,N=0,M=1,H,l,r;
    scanf("%d%d",&um,&k);
    for(i=0;i<um;i++)
        scanf("%d",&a[i]);
    while(k--){
    N=0,M=1;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++){
        N+=a[i]%um;
        N%=um;
        M*=a[i]%um;
        M%=um;
    }
    l=in(N,M),r=mx(N,M);
    H=a[l];
    for(i=l+1;i<=r;i++)
      H=H^a[i];
    printf("%d\n",H);
    }
    return 0;
}