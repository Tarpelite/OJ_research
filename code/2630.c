#include <stdio.h>
#include <stdlib.h>
int is(int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i,f;
	scanf("%d",&x);
	i=x+1;
	f=is(i);
	while(f==0)
	{
		i++;
		f=is(i);
	}
	printf("%d",i);
	return 0;
}

int is(int x)
{
	int i,f=1;
	for(i=2;i*i<=x;i++)
	{
		if(x%i==0)
		f=0;
	}
	return f;
}