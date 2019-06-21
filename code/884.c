#include<stdio.h>
int main(void)
{
	int m,n;
	int num=1,i;
	scanf("%d%d",&m,&n);
	if(n>m) printf("0");
	else
	{
		for(i=1;i<=m-n;i++) 
		{
			num*=(n+i);
			num/=i;
		}
		printf("%d",num);
	}
	return 0;
}