#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  main()
{   int n,k;
    int m[10005],a[10005],b[10005];
    scanf("%d%d",&n,&k);

    for (int i=0;i<=n-1;i++)
        scanf("%d",&m[i]);
    for (int j=1;j<=k;j++)
        scanf("%d%d",&a[j],&b[j]);
    int M=1,N=0,H=0;
    for (int j=1;j<=k;j++)
    {
        for (int p=a[j];p<=b[j];p++)
        {
            N=N+m[p];

        }
        for (int p=a[j];p<=b[j];p++)
        {
            M=M*m[p];
            M=M%n;
        }
        N=N%n,M=M%n;
        if (M>N)
            {
            for(int p=N;p<=M;p++)
            {
              H=H^m[p];
            }
            printf("%d\n",H);

            }
        else
        {
            for(int p=M;p<=N;p++)
            {
            H=H^m[p];
            }
             printf("%d\n",H);

        }
        M=1,N=0,H=0;
    }
    return 0;
}