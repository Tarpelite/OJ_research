#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	double a;
	scanf("%d",&n);
	a=sqrt(n);
	m=a+1;
    n=n+1;
	for(int i=2;;n++)
	{
	for(i=2;i<=m;i++)
    {
    	 if(n%i==0)
            break;
		} 
	if(i>m)
	{
		break;
	}

	}
	printf("%d",n);
	return 0;
 }