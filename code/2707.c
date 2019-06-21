#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==n)printf("1");
	else
	{
		double s=1;
		int i;
		for(i=1;i<=m-n;i++)
		{
			s*=(double)(n+i)/i;
		}
	 	int t=(int)(s+0.5);
	 	printf("%d",t);
	}
	return 0;
}