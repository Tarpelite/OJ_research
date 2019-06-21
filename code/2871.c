#include <stdio.h>
int a[100000]={0};

int main()
{
	
	int n,x,y,i=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&y);
	for(i=100000;i>=0;i--)
	{
		if(a[i])
		y--;
		if(!y)
		{
			printf("%d %d",i,a[i]);
			return 0;
		}
	}
}