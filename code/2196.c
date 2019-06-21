#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	if (n==1)
	{
		printf("2");
    }
	else
	{
		A:n+=1;
		sum=0;
		for (j=2;j<n;j++)
		{
			if (n%j==0){
				sum+=1;
			}
		}
		if (sum==0){
		printf("%d",n);
		}
		else {
			goto A;
		}
	}
	
	return 0;
}