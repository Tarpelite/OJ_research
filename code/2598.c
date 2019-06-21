#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int A[100]={0};
    int i,j;
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<k;++i)
    {
        int l,r,max,min;
        scanf("%d%d",&l,&r);
        int N=0,M=1,H=0;
        for(j=l;j<=r;++j)
        {
            N+=(A[j]%n);
            N%=n;
            M*=(A[j]%n);
            M%=n;
        }


        if(N>M)
        {
            max=N;
            min=M;
        }
        else
        {
            max=M;
            min=N;
        }
        for(j=min;j<=max;++j)
        {
            H^=A[j];
        }
        printf("%d\n",H);
    }

	return 0;
 }