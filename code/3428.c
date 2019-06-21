#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//输出一个组合数
int shu (int n,int m)
{
    if (m==0) return 0;
    if (m==1) return n;
    if (m==n) return 1;
    else return shu(n-1,m)+shu(n-1,m-1);
}

int main()
{
 int n,m;
 scanf("%d%d",&n,&m);
printf("%d",shu (n,m));
    return 0;
}