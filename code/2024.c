#include<stdio.h>
int main()
{
    int n,k,i,l,r,N=0,x,M=0;
    scanf("%d%d",&n,&k);
    x=k-1;
    int a[n],t[k];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(k)
    {
        scanf("%d%d",&r,&l);
        N=a[r];M=a[r];
        for(i=r+1;i<=l;i++)
        {
            N=(N%n+a[i]%n);
            M=((M%n)*(a[i]%n));
        }
        N=N%n;
        M=M%n;
        r=M<N?M:N;
        l=M>N?M:N;
        t[k-1]=a[r];
        for(i=r+1;i<=l;i++)
        {
            t[k-1]^=a[i];
        }
        k--;
    }
    for(x;x>=0;x--)
        printf("%d\n",t[x]);
        return 0;
}