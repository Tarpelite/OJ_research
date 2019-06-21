#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a,i,j,m=0;
	scanf("%d",&a);
	for(i=a+1;i<=1000000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
			{
				m++;
			}
		}
		if(m==i-2)
		{
			printf("%d",i);
			return 1;
		}
		m=0;
	}
	return 0;
}