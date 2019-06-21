#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,min,max,t;
    scanf("%d %d",&n,&k);
    int a[n],l[k],r[k],H[k];
    int i,x;
    int N[k],M[k];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        N[i]=0;
        M[i]=1;
        scanf("%d%d",&l[i],&r[i]);
        for(x=l[i];x<=r[i];x++)
        {
            N[i]+=a[x];
            M[i]=(M[i]%n)*(a[x]%n);
        }
        min=N[i]%n;
        max=M[i]%n;
        if(min>max)
        {
            max=N[i]%n;
            min=M[i]%n;
        }
        H[i]=a[min];
        if(min!=max)
        {
            for(t=min+1;t<=max;t++)
            {
                H[i]=H[i]^a[t];
            }
        }

    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",H[i]);
    }
    return 0;
}