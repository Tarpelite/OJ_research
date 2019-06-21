#include<stdio.h>
double ji(int a)
{
	double s=1;
	int i=1;
	if(a==0&&a==1) return 1;
	else
	{
		for(;i<=a;i++)
		{
			s*=i;
		}
	return s;
	}	
}
int main()
{
	int m,n;
	double k;
	scanf("%d%d",&m,&n);
		k=1.0*(ji(m)/ji(n))/ji(m-n);
		printf("%.0lf",k);
	return 0;
}