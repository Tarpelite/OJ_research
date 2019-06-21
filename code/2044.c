#include<stdio.h>
int main()
{
	int n,x,i,ch;
	scanf("%d",&n);
	if(n==1) printf("2");
	else
	{
		for(x=n+1;x<n*2;x++)
		{
			ch=1;
			for(i=2;i*i<=x;i++)
			{
				if(x%i==0) 
				{
					ch=0;
					break;
				}
			}
			if(ch==1) 
			{
				printf("%d",x);
				return 0;
			}
		}
	}
	return 0;
}