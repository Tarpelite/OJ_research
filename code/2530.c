#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,K,a[10010]={0},i,j,N,M,H,temp;
    int b[10010]={0},c[10010]={0};
    scanf("%d%d",&n,&K);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=1;i<=K;i++){
        scanf("%d%d",&b[i],&c[i]);
            int s1=0,s2=1;
        for (j=b[i];j<=c[i];j++){
            temp=a[j]%n;
            s1+=temp;
        }
        for (j=b[i];j<=c[i];j++){
            temp=a[j]%n;
            s2*=temp;
            s2%=n;
        }
    N=s1%n;
    M=s2%n;
    if (N<M){
        H=a[N];
        for (j=N+1;j<=M;j++)
            H=H^a[j];
            printf("%d\n",H);
    }
    else {
        H=a[M];
        for (j=M+1;j<=N;j++)
            H^=a[j];
            printf("%d\n",H);
    }
    }
    return 0;
}