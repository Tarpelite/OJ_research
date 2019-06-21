#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m,n,x=1,y=1,i;
	scanf("%d%d",&m,&n);
	
	for(i=m;i>m-n;i--)
	x=x*i;
	
	for(i=1;i<=n;i++)
	y=y*i;
	printf("%d",x/y);
	return 0;
}