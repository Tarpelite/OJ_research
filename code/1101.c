#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,a[10001],i,j,l[101],r[101],N[101],M[101],H[101],p[101],q[101];
    scanf("%d",&n);
    scanf("%d",&k);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<k+1;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=1;i<k+1;i++)
    {
        N[i]=0;
        M[i]=1;
        H[i]=0;
        for(j=l[i];j<=r[i];j++)
        {
            N[i]=N[i]+(a[j]%n);
            M[i]=(M[i]*(a[j])%n);
        }
        M[i]=M[i]%n;
        N[i]=N[i]%n;
        p[i]=M[i]>N[i]?M[i]:N[i];
        q[i]=M[i]<N[i]?M[i]:N[i];
        for(j=q[i];j<=p[i];j++)
        {
            H[i]=H[i]^a[j];
        }
        printf("%d\n",H[i]);
    }
	return 0;
}