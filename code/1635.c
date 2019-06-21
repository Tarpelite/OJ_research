#include <stdio.h>

int main()
{
	int n,next;
	scanf("%d",&n);
	next=n+1;
	while(next<1000000)
	{
		int d=2;
		while(next%d!=0)
		{
			d++;
		}
		if(next==d)
		    break;
		else
		    next++;
	}
	printf("%d",next);
	return 0;
}