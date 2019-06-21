#include<stdio.h>
int main()
{
    int n,K,min,max,b,c;
    scanf("%d %d",&n,&K);
    int a[n+5],l[K+5],r[K+5];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<K; i++)
        scanf("%d %d",&l[i],&r[i]);

    for(int j=0; j<K; j++)
    {
        int N;
        b=0;
        for(int i=l[j]; i<=r[j]; i++)
        {
            b+=(a[i]%n),b%=n;
        }
        N=b;
        int M;
        c=1;
        for(int i=l[j]; i<=r[j]; i++)
        {
            c*=(a[i]%n),c%=n;
        }
        M=c;
        if(N>M)
        {
            min=M;
            max=N;
        }
        else
        {
            min=N;
            max=M;
        }
        int H;
        H=a[min];
        if(max-min>=1)
        {
            H=a[min]^a[min+1];
            if(max-min==2)
                H=H^a[min+2];
            if(max-min>2)
            {
                for(int i=min+2; i<=max; i++)
                    H^=a[i];
            }
        }
        printf("%d\n",H);
    }
    return 0;
}