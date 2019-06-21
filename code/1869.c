#include<stdio.h>
int main()
{
    long long zuhe,m,n,i,j,k,a,b,c;
    scanf("%lld%lld",&n,&m);
    if(n!=m)
    {
        for(i=0,a=1; i<n; i++)
        {
            a=a*(i+1);
        }
        for(j=0,b=1; j<m; j++)
        {
            b=b*(j+1);
        }
        for(k=0,c=1; k<(n-m); k++)
        {
            c=c*(k+1);
        }
        zuhe=a/(b*c);
        printf("%lld",zuhe);
    }
    else if(n==m||m==0||n==0)
    {
        printf("1");
    }
    return 0;
}