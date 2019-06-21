#include<stdio.h>

double jiecheng(int a)
{int i;
double iq=1;
for(i=a;i>0;i--)
{iq=iq*i;}
return iq;
}

int main()
{double n,m,c,d,f,g,h,e;
scanf("%lf %lf",&n,&m);
c=n-m;
h=jiecheng(c);
g=jiecheng(n);
d=g/h;
e=jiecheng(m);
f=(int)d/e;
printf("%.0lf",f);
return 0;

}