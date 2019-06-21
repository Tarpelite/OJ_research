#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d",&a);
	b=a+1;
	for(;1;b++)
	{
		for(c=2,i=1;i!=0;c++)
		{
			i=b%c;
		}
		if(b==c-1)
		{
			printf("%d",b);
			break;
		}
	}
	return 0;
}