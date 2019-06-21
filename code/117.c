#include <stdio.h>
#include <stdlib.h>
long long h(int m,int n)
{
    long long ans=1;
    if(m<n-m)
        m=n-m;
    for(int i=m+1;i<=n;i++)
        ans*=i;
    for(int j=1;j<=n-m;j++)
        ans/=j;
    return ans;

}

int main()
{
    int m,n;
    long long option=0;
    scanf("%d%d",&m,&n);
    option=h(n,m);
    printf("%lld",option);


}