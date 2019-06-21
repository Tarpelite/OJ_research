#include<stdio.h>

int main()
{
    double m,n,p=1,i=1;
    scanf("%lf%lf",&m,&n);
    for(i=1;i<=n;i++)
    {
        p=p*(m-i+1)/(n-i+1);
    }
    printf("%.0lf",p);
	return 0;
}