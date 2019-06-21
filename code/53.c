#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    int i,sum=1;
    for(i=0;i<n;i++)
    {
        sum=sum*(m-i);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum/i;
    }
    printf("%d",sum);
    return 0;
}