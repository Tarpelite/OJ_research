#include<stdio.h>
int main ()
{
	int n,i;
	int m,p=1;
	scanf("%d",&n);
	if (n==2)
	printf("3");
	else
	{
		while(n>2)
		{
			n=n+2;m=1;p=1;
			for(i=3;i<n;++i)
			{
				m=n%i!=0;
				p=p*m;
			}
			if(p==1)
			{
			break;
			}		
			
		}
		printf("%d",n);
	}
	return 0;
 }