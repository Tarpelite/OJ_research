#include <stdio.h>

int A(int m,int n)    //计算A下m上n
{
    int i,res;
    res = 1;
    for(i=m;i>m-n;i--)
        res *= i;
    return res;
}

int C(int m,int n)    //计算C下m上n
{
    return A(m,n)/A(n,n);
}

int main()

{
 int m, n;
 scanf("%d %d", &m, &n);
 int sum = 1;
if  (m==0)
{
sum =0;
}
else if(m >= n)
{
 sum = C(m,n);
}
else
{
sum =0;
}
 printf("%d", sum);
 return 0;
}