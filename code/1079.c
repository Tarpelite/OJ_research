#include <stdio.h>


int main()
{  int n,k,r,l,i,j;
   int N,M,H;
   int a[105];
   scanf("%d%d",&n,&k);
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for (j=1;j<=k;j++)
   {   scanf("%d%d",&l,&r);
       N=0;
       M=1;
       for (i=l;i<=r;i++)
       {
           N+=a[i]%n;
           M*=a[i]%n;
           N=N%n;
           M=M%n;
       }
        if(N<M)
        {
            l=N;
            r=M;
        }
        else
        {
            l=M;
            r=N;
        }
        for (i=l+1,H=a[l];i<=r;i++)
        {
            H=H^a[i];
        }
        printf("%d\n",H);
   }


    return 0;
}