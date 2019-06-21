#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,s=2;
	scanf("%d",&n);
	m=n+1;
	while(s<=sqrt(m))
	{
		if(m%s==0)
		{
			m++;
			s=2;
		}
		else
			s++;
	}
	printf("%d",m);
	return 0;
}