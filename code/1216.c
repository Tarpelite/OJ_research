#include<stdio.h>

int main()
{
    int n,k,a[101],l[101],r[101],i,j,N,M,H,max,min;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        scanf("%d%d",&l[i],&r[i]);
    for(i=0;i<k;i++)
    {
        N=0;M=1;H=0;
        for(j=l[i];j<=r[i];j++)
        {
            N=((N%n)+(a[j]%n))%n;
            M=((M%n)*(a[j]%n))%n;
        }

        max=N;min=M;
        if(M>N)
        {
            max=M;
            min=N;
        }
        for(j=min;j<=max;j++)
        {
             H^=a[j];
        }
        printf("%d\n",H);

    }
    return 0;

}