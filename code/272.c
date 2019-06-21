#include<stdio.h>
#include<math.h>
//int min(int,int);
//int max(int,int);
int main()
{
	int a,i,n;
	scanf("%d",&n);
	while(1)
	{   a=1;
		n++;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				a=0;
			}
		}
		if(a==1)
		{
			goto here;
		}
	}
	here:
		printf("%d",n);
		return 0;
}