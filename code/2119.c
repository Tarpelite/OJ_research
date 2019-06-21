#include<stdio.h>
#include<math.h>
#define max(a,b) a>b?a:b
#define min(c,d) c<d?c:d
int main()
{
    int i,j,z,n,k;
    int X,Y;
    scanf("%d%d",&n,&k);
    int a[n],l[k+1],r[k+1];
    int N[k+1],M[k+1],H[k+1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=k;j++){
        scanf("%d %d",&l[j],&r[j]);
        N[j]=0;
        M[j]=1;
        H[j]=0;
        }
    for(j=1;j<=k;j++)
    {
        for(i=l[j];i<=r[j];i++)
        {
            N[j]=((N[j]%n)+(a[i]%n))%n;
            M[j]=((M[j]%n)*(a[i]%n))%n;
        }
        X=min(N[j],M[j]);
        Y=max(N[j],M[j]);
        for(z=X;z<=Y;z++)
        {
            H[j]^=a[z];
        }
      printf("%d\n",H[j]);
    }
    return 0;
}