#include<stdio.h>

int fun(int b)
{
	int flag=1;
	int i;
	
	for(i=2;i<b;i++)
	{
		if(b%i==0){
			flag=0;
			break;
		}
	}
	
	if(flag==0)
	return 0;
	
	if(flag==1)
	return 1;
}

int main()
{
	int i,k,p=0;
	
	scanf("%d",&k);
	
	for(i=k+1;i<1000000;i++)
	{
		if(fun(i)==1)
		{
		   printf("%d",i);
		   break;		
		}

	}
	
	return 0;
}