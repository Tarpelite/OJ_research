#include<stdio.h>
#include<math.h>
long long int jc(int x);
int main()
{
    long long int b,c,d,e;
    scanf("%lld%lld",&b,&c);
    d=b-c;
    b=jc(b);
    c=jc(c);
    d=jc(d);
    e=(b/c)/d;
    printf("%lld",e);
    return 0;
}
long long int jc(int x)
{
    long long int a=1;
    while(x>0)
    {
        a=a*x;
        x--;
    }
   return a;
}