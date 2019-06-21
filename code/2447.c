#include<stdio.h>
#include<math.h>
int prime(int x)
{
int i;
for(i=2;i<=sqrt(x);i++)
if(x%i==0)
return 1;
return 0;
} 
int main()
{
	int n, i, t;
	scanf("%d", &n);
	for(i=n+1;;i++)
	{
		if(prime(i)==0)
		{
			break;
		}
		continue;
	}
	printf("%d",i);
	return 0;
}