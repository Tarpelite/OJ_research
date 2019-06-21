#include<stdio.h>
int main()
{
	int a,i,j,b=0;
	scanf("%d",&a);
	for(i=a+1;b==0;i++)
	{
		for(j=i-1;j>1;j--)
		{
			b=i%j;
			if(b==0)
			break;
		}

	}
	printf("%d",i-1);
	return 0;

}