#include<stdio.h>
int main()
{
	int a,b,i=0,ans,c,d,j;
	scanf("%d %d",&a,&b);
	c=1;
	while(i<b)
	{
		c=c*(i+1);
		i++;
	}
	d=a;
	i=1;
	j=a;
	while(i<b)
	{
		d=d*(j-1);
		j--;
		i++;
	}
	ans=d/c;
	printf("%d",ans);
	return 0;
	
 }