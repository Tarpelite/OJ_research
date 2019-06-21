#include<stdio.h>
int main()
{
	int n,t=1,x,i,q;
	scanf("%d",&n);
	x=n;

	while(t!=0)
	{
		t=0;
		x++;
		for(i=2;i<=x/2;i++)
		{
			q=x%i;
			if(q==0)
			{
				t++;
				break;
			}
		}
		if(t==0)
		{
			printf("%d",x);
			return 0;
		}
	}
	return 0;
}