#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
	int a[100001]={0},k,j=0;
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&k);
	a[k]++;
	}
	int m;
	scanf("%d",&m);
	for(i=100000;i>=1;i--)
	{
		if(a[i]!=0)
			j++; 
		if(j==m)
			{
				printf("%d %d",i,a[i]);
				break;
			}
	}
	return 0;
}