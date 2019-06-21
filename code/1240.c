#include<stdio.h>
#include<stdlib.h>
int n,k,a[1000],i,j,l[1010],r[1010],p[1010],q[1010];
long long N[1010],M[1010],H[1010]; 
int main()
{
    
    scanf("%d",&n);
    scanf("%d",&k);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<k+1;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    	N[i]=0;
        M[i]=1;
        H[i]=0;
        for(j=l[i];j<=r[i];j++)
        {
            N[i]=N[i]+(a[j]%n);
            M[i]=(M[i]*a[j])%n;
        }
        M[i]=M[i]%n;
        N[i]=N[i]%n;
       //printf("%lld,%lld\n",M[i],N[i]);
        
        p[i]=M[i]>N[i]?M[i]:N[i];
        q[i]=M[i]<N[i]?M[i]:N[i];
        
        for(j=q[i];j<=p[i];j++)
        {
            H[i]=H[i]^a[j];
        }
        printf("%lld\n",H[i]);
    }
	return 0;
}