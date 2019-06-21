#include<stdio.h>
double jiecheng(double x)
{double i,q=1;
for(i=1;i<=x;i++)
q=q*i;
return q;
}
int main()
{
double m,n,a,b,c,d;
scanf("%lf%lf",&m,&n);
a=jiecheng(m);
b=jiecheng(n);
c=jiecheng(m-n);
d=a/(b*c);
printf("%.0f",d);
return 0;
}