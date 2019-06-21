#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    double s=1.0;
    double a[10000]={0.0};
    if(n==0) printf("0");
    else
    {
        for(i=1;i<=n;i++)
        {
            a[i]=((double)m-(double)i+1.0)/((double)n-(double)i+1.0);
            s*=a[i];
        }
    printf("%.0f",s);
    }

    return 0;
}