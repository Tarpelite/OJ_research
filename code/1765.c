//D
#include<stdio.h>
#include<math.h>
int main()
{
    double i,m,n;
    double sum1 = 0,sum2 = 0;
    scanf("%lf %lf",&n,&m);
    for(i = m+1;i <= n;i++){
        sum1 += log(i);
    }
    for(i = 2;i <= n-m;i++){
        sum2 += log(i);
    }
    printf("%.0lf",exp(sum1 - sum2));
    return 0;
}