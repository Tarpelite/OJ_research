#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i;
    int a[101];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l,r,j;
    int H[101];
    int N,M,max,min;
    for(i=0;i<k;i++)
    {
        int N=0,M=1,C=0;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;++j)
            {
                N=N+(a[j]%n);
                N=N%n;
                M=M*(a[j]%n);
                M=M%n;
            }
            if(N<M)
            {
                min=N;
                max=M;
            }
            else
            {
                min=M;
                max=N;
            }
            for(j=min;j<=max;++j)
            {
                C=C^a[j];
            }
            H[i]=C;
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",H[i]);

    }
    return 0;
}