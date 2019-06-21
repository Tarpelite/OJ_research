#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=n+1;
	while(1)
	{
		b=2;
		while(a%b!=0&&b<=a)
		{
		 b++;
			}
		if(a==b)
		{
			printf("%d ",a);
			return 0;
			}
		a++;	
	}
	return 0;
}