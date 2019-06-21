#include<stdio.h> 

#include <string.h>


int judge(int a)
{

	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a;
	scanf("%d",&a); 
	while(1)
	{
		a++;
		if(judge(a)==0)
		{
			printf("%d",a);
			return 0; 
		}

	}
}