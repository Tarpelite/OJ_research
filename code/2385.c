#include<stdio.h>
int num(int n,int i);
int n;
int main()
{
	int i=1,k;
	scanf("%d",&n);
	if(n==1)
	    printf("2");
	else
{ 
	while(1)
	{
		k=num(n,i);
		if(k==n+i)
		{
		    printf("%d",n+i);
		    break;
		}
		i++;
		
	}
}
	return 0;
	
}

int num(int n,int i)
{
	int j=2,a=0;
	for(;j<(n+i);j++)
	{
		if((n+i)%j==0)
		{
			a++;
		}
	}
	if(a==0)
	    return (n+i);
	return 0;
}