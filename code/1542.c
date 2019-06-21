#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int next=n+1;
	while(next<1000000)
	{
		int k=2;
		while(next%k!=0)
		k++;
		if(k==next)
		break;
		else 
		next++;
	}
	printf("%d",next);
	return 0;
}