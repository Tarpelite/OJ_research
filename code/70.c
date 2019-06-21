#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m,n,i,flag=0;
	scanf("%d",&n);
	m=n+1;
	while(m>n)
		{
			flag=0;
			for(i=2;i<m;i++)
		{	if(m%i==0)
				{
					flag=1;
					break;
				}
		}
		if(flag==0)
			{
				printf("%d",m);
				break;
			}
		m++;
		}
	return 0;
}