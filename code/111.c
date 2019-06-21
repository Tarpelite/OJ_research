#include<stdio.h>
double jc(int a)
{
    int i=1,j=a;
    double ans=1;
    for(i;i<j;i++)
    {
    	ans*=a;
    	a--;
	}
	return ans;
}
int main()
{
	int m,n,ans;
	scanf("%d %d",&m,&n);
	printf("%.0lf",jc(m)/(jc(n)*jc(m-n)));
	return 0;
}