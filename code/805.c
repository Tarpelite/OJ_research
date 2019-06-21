#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,j;
	while(1)
	{
		j=0;
		a=a+1;
	for(i=2;i<=a/2;i++)
	if(a%i==0)
	j=1;
	if(j==0)
	break;
	}
	printf("%d\n",a);
	return 0;
}