#include <stdio.h>

int main()
{
	int a[100000],i=0,n=0;
	
	while(i<100000)
		a[i++] = 0;
	
	scanf("%d",&n);
	while(n-->0)
	{
		scanf("%d",&i);
		a[i] += 1;
	}
	
	i=100000;
	scanf("%d",&n);
	while(n>0)
	{
		if(a[--i]>0)
			n--;
	}
	printf("%d %d",i,a[i]);
	
	return 0;
}