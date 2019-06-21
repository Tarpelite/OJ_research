#include <stdio.h>
int main()
{
    int m,n,p=1,q=1,i;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        p*=(m-i);
    }
    for(i=1;i<=n;i++)
    {
        q*=i;
    }
    int s=p/q;
    printf("%d",s);
    return 0;
}