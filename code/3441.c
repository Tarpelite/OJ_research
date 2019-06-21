#include<stdio.h>
int main(void)
{
	int n,b=2;
	scanf("%d",&n);
	while(1)
	{
		n++;
		while(n%b!=0&&b<n)
		{
		    b++;
	    }
	    if(b==n) break;
	    else b=2;
	}
	printf("%d",n);
	return 0;
}