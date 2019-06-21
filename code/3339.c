#include <stdio.h>
int main()
{
    int m,n,i;
    double p=1.0,q=1.0;
    scanf("%d %d",&m,&n);

    for(i=0;i<n;i++)
    {
        p*=((double)m-(double)i);
    }
    i=1;
    for(i=1;i<=n;i++)
    {
        q*=(double)i;
    }
    int s=p/q;
    printf("%d",s);
    return 0;
}