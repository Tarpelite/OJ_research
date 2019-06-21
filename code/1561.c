#include<stdio.h>
int main()
{
long long n,m;
long long n1,m1,o1;
long long fact(long long n);

scanf("%lld%lld",&n,&m);
n1=fact(n);
m1=fact(m);
o1=fact(n-m);
printf("%lld\n",n1/(m1*o1));
}
long long fact(long long n)
{
long long i;
long long sum;
sum=1;
for(i=1;i<=n;i++)
{
sum=sum*i;
}
return sum;}