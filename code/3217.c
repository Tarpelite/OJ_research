#include <stdio.h>
int main()
{
    int m,n,i,p,q;
    scanf("%d %d",&m,&n);
    double s=1.0;
    for(i=1;i<=n;i++)
    {
       p=m-i+1;
       q=n-i+1;
       s*=((double)p/(double)q);
    }
    printf("%.0f",s);
    return 0;
}