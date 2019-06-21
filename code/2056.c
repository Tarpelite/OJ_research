#include<stdio.h>
int main()
{
	int a;
	int i,j;
	scanf("%d",&a); 
	if(a==2)
	{
		printf("3");
		return 0;
	}
	else
	do{a+=2;for(j=0,i=2;i<a;i++)
	{if(a%i==0)
	
		j++;
	
		
	}
		
	}
	while(j!=0);
	printf("%d",a);
	return 0;
 }