#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
double jicheng(int s)
{
    int sum;
    double t=1;
    for(sum=1;sum<=s;sum++)
        t=t*sum;
    return t;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    double r;
    r=jicheng(m)/jicheng(n);
    printf("%.0lf",r/jicheng(m-n));
    return 0;
}