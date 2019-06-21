#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a=1,b=1,k=n,i;
	for(i=0;i<k;i++)
	{
		a=a*m;
		m--;
		b=b*n;
		n--;
	}
	printf("%d",a/b);
	return 0;
}