#include<stdio.h>

int j(int a)
{
	int i;
	for(i=2;i<=a/2+1;i++)
	{
		if(a%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int a,i;
	scanf("%d",&a);
	while(1)
	{	
		a++;
		if(j(a))
		{
			printf("%d",a);
			return 0;
		}
	}

}