#include<stdio.h>
double jc(int x,int z)
{
	double y=1,f,e=z;
	for(int i=z;i<x;i++)
	{
		f=i;
		y*=(f+1)/(f-e+1);
	}
	return y;
}
int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",(int)jc(m,n));
	return 0;
}