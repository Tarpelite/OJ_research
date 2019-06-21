#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k=0;
	scanf("%d",&n);
	for(n++;;n++)
	{
		if(n==2)
		{
			break;
		}
		else
		{
			k=0;
		for(i=2;i<sqrt(n)+1;i++)
		{
			if(n%i==0)
			{
				k++;
				break;
			}
		}
		if(k==0)
		{
			break;
		}
		}
	}
	printf("%d",n);
	return 0;
}