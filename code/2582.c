#include<stdio.h>
int prime(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<1000000;i++)
    {
    	if(prime(i)==1)
    	break;
	}
	printf("%d\n",i);
	return 0;
}

int prime(int n)
{
	int judge=1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			judge=0;
			break;
		}
	}
	return judge;
}