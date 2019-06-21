#include<stdio.h>
int main()
{
    int n,r[10000]={0},i,K,a[10000]={0},l[1000]={0};
    int j,m,p,M,N,H[10000]={0},big,small;
    scanf("%d%d",&n,&K);
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    for(j=0;j<K;j++)
    {
        scanf("%d%d",&l[j],&r[j]);
        M=1;N=0;H[j]=0;
        for(m=l[j];m<=r[j];m++)
        {
           N=N+a[m]%n;
           M=M*a[m]%n;
        }
        M=M%n;N=N%n;
        big=M>N?M:N;
        small=M<N?M:N;
        for(p=small;p<=big;p++)
        H[j]=H[j]^a[p];
    }
       for(j=0;j<K;j++)
         printf("%d\n",H[j]);
       return 0;
}