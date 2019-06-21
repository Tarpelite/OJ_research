#include<stdio.h>
int main()
{
	int a;
	int b,i;
	scanf("%d",&a);
	b=a+1;
	for(;b<1000000;b++)
	{
		for(i=2;i<b;i++)
		{
			if(b%i==0)
			break;
		}
		if(i==b)
		break;
	}
	printf("%d",b);
	return 0;
}