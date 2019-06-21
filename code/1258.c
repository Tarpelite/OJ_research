#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int main()
{
    int n,k,i,M,N,x,y,H;
    int a[100]={0},l,r;
    scanf ("%d%d",&n,&k);
    for (i=0;i<=n-1;i++)
        scanf ("%d",&a[i]);
    while(k--){
        scanf ("%d%d",&l,&r);
         M=1;
        N=0;
        for(i=l;i<=r;i++){
        M=M*(a[i]%n);
        M=M%n;
        N=N+(a[i]%n);
        N=N%n;
        }
        M=M%n;
        N=N%n;
        x=min(N,M);
        y=max(N,M);
        H=a[x];
        for(i=x+1;i<=y;i++){
            H=a[i]^H;
        }
        printf("%d\n",H);
    }

    return 0;
}