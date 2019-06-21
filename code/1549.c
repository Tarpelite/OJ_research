#include<stdio.h>
#include<math.h>
int main()
{
    int n,K;
    scanf("%d%d",&n,&K);
    int a[100],i,j;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int b[100],c[100],N[100]={0},M[100],l[100],r[100],H[100]={0};
    for(i=0; i<K; i++)
        scanf("%d%d",&b[i],&c[i]);
    for(i=0; i<K; i++)
    {
        M[i]=1;
        for(j=b[i]; j<=c[i]; j++)
        {
            N[i]=N[i]+a[j];N[i]=N[i]%n;
            M[i]=M[i]*(a[j]);M[i]=M[i]%n;
        }
        if(N[i]<M[i])
        {
            l[i]=N[i];
            r[i]=M[i];
        }
        else
        {
            l[i]=M[i];
            r[i]=N[i];
        }
        for(j=l[i];j<=r[i];j++)
            H[i]=(H[i])^(a[j]);
        printf("%d\n",H[i]);
    }
    return 0;
}