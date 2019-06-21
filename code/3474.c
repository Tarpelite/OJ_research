#include<stdio.h>
int main()
{
	int m,n,t;
	double a=1.0,b=1.0;
	scanf("%d%d",&m,&n);
	t=m-n;
	int i=m;
	for(i;i>n;i--)
	    {a=a*(1.0*i);}
	for(t;t>0;t--){
		b=b*(1.0*t);
	}
	printf("%.0lf",a/b);
}