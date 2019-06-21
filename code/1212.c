#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,k,i,x,a[100001]={},m=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	} 
	scanf("%d",&k);

	for(i=100000;i>0;i--)
	{
		if(a[i]!=0)
		m++;
		if(m==k)
		{
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0;
}