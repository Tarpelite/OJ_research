#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int next=n+1;
	while(next<1000000)
	{
		int d=2;
		while(next%d!=0)
		d++;
		if(d==next)
		break;
		else
		next++;
	}
	printf("%d",next);
	return 0;
}