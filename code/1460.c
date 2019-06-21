#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n,m,i,j,k=1;
	scanf("%d%d",&m,&n);
	for(i=1,j=m;i<=n;i++,j--)
	{
		k=k*j/i;
	}
	printf("%d",k);
	return 0;
}