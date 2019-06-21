#include <stdio.h>
int main()
{
    int m,n,i,M=1,N=1,re;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        N=i*N;
    for(i=0;i<n;i++)
        M=(m-i)*M;
    re=M/N;
    printf("%d",re);
    return 0;
}