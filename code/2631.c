#include<stdio.h>
double jc(double n ) 
{
   int  i;
   if(n==0)
   return 1;
 for(i=n-1;i>=1;i--)
 	n=n*i;	  
	return n;	
}
int main()
{
    double m;
	double n;
	double s;
	scanf("%lf%lf",&m,&n);
	s=jc(m)/(jc(n)*jc(m-n));
	printf("%.0f",s); 
}