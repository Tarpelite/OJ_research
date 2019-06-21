#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,m,i,judge;
	scanf("%d",&n);
	if(n==2)
		printf("3");
	else
	{
		for(m=n+2;;m+=2)
		{
			judge=0;
			for(i=3;i<m;i+=2)
			{
				if(m%i==0)
				{
					judge=1;
					break;
				}
			}
			if(judge==0)
			{
				printf("%d",m);
				break;
			}
		}
	}
	return 0;
}