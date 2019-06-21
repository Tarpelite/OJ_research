#include <stdio.h>
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int m,n,i;
	int p,q;
	p=1;
	q=1;
	scanf("%d%d",&m,&n);
	if(n>=m-n)
	n=m-n;
	for(i=m-n+1;i<=m;i++)
		p*=i;
	for(i=1;i<=n;i++)
		q*=i;
	printf("%d",p/q);
	
	return 0;
}