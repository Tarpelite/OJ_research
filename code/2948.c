#include<stdio.h>
int main()
{
int n,m;
double n1,m1,o1;
double fact(int n);
scanf("%d%d",&n,&m);
n1=fact(n);
m1=fact(m);
o1=fact(n-m);
printf("%.0f",n1/(m1*o1));
}
double fact(int n)
{
int i;
double sum;
sum=1;
for(i=1;i<=n;i++)
{
sum=sum*i;
}
return sum;}