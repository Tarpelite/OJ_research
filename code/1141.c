#include<stdio.h>
int main()
{
    double m,n,e=1,f=1,d;
    scanf("%lf%lf",&m,&n);
    while(n!=0)
    {
        e=e*m;
        f=f*n;
        m--;n--;
        if(n==0)
        {
            d=e/f;
            break;
        }
    }
    printf("%.0lf",d);
    return 0;
}