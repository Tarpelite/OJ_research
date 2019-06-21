#include<stdio.h>

long long  i, temp;
long long jiecheng (long long x)
{
    for(temp =1,i =0; i<x; i++)
        {
            temp =temp *(i+1);
        }
    return temp ;
}
int main ()
{
    long long m, n,results;

    scanf("%lld%lld",&m, &n);

    results=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));

    printf("%lld", results );
    return 0;

}