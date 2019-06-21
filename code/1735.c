#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m, n;
	scanf("%d%d",&m,&n);
	int x,i=0;
	x=1;
	int j=1;
	for(i;i<n;i++)
	{	
		x=x*m/j;
		m=m-1;
		j=j+1;
	}
	printf("%d",x);
	return 0;
}