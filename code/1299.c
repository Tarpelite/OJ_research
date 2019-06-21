#include <stdio.h>
int main() 
{
	int m,n,x,y,z,i;
	scanf("%d %d",&m,&n);
	x=1;
	z=1;
	for(i=0;i<n;i++)
	{
		y=m-i;
		x=x*y;
		z=z*(i+1);
	}
	printf("%d",x/z);
	return 0;
}