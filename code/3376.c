#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//输出比该质数大的一个质数
int judge (int m)
{
    int i;
    for (i=2;i<m/2;i++)
    {
        if (m%i==0) return 0;
    }
    return 1;
}
int main ()
{
    int m;
    scanf("%d",&m);

    for (m++;!judge(m);m++);
    printf("%d",m);
    return 0;

}