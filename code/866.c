#include<stdio.h>
int a[15000000];
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
	for(i=0;i<15e6;i++) a[i]=1;
	return 0;
}