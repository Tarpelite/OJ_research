#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int zhishu(int);
int main(int argc, char *argv[]) 
{
	int n,x;
	scanf("%d",&n);
	x=n+1;
	while(zhishu(x)!=0)
	x++;
	printf("%d",x);
	return 0;
}
int zhishu(int x)
{
	int i,k=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		k++;	
	}
	return k;
}