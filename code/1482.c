#include<stdio.h>

double fac(int x);
int main()
{
    int m,n;
    double p,q,l,k;
    scanf("%d%d",&m,&n);
    p=fac(m);
    q=fac(n);
    l=fac(m-n);
    k=p/(q*l);
    
    printf("%.0lf\n",k);
    return 0;
}
 double fac(int x)
{
   double t;

   if (x==0) t=1;
   else t=x*fac(x-1);
  
   return t;
}