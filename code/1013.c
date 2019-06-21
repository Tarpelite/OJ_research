#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,K,i,j,p,a[10005],b[105],c[105],N,M,H;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<K;i++)
    {
        scanf("%d%d",&b[i],&c[i]);
    }
       for(i=0;i<K;i++)
       {N=0;M=1;
           for(p=b[i];p<=c[i];p++)
           {
               N=N+a[p];
               M=M*(a[p])%n;
           }N=N%n;M=M%n;
           if(N<M)
           {H=a[N];
               for(p=N+1;p<=M;p++)
               {
                   H=H^a[p];
               }printf("%d\n",H);
           }else
                      {H=a[M];
               for(p=M+1;p<=N;p++)
               {
                   H=H^a[p];
               }printf("%d\n",H);
           }
    }
    return 0;
}