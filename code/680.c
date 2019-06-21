# include <stdio.h>
int main ()
{	
	int n;
	scanf("%d",&n);
	int i,status;
	while(1)
	{
		status = 0;
		n++;
		for(i=2;i<=n/2;i++)
		{
			if(n%i == 0)
				status =1;
		}
		if(status == 0)
			break;
	}
	printf("%d\n",n);
	return 0;
}