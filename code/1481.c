#include <stdio.h>
int main()
{
    int m,n,i,a=1;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
    {
        a=a*m/i;
        m--;
    }
    printf("%d",a);
    return 0;
}