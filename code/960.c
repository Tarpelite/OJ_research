#include<stdio.h>
int main()
{
int n,m;
long long n1,m1,o1;
long fact(int n);
scanf("%d%d",&n,&m);
n1=fact(n);
m1=fact(m);
o1=fact(n-m);
printf("%lld\n",n1/(m1*o1));
}
long fact(int n)
{
int i;
long sum;
sum=1;
for(i=1;i<=n;i++)
{
sum=sum*i;
}
 return sum;
}