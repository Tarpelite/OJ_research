#include <stdio.h>

int isPrime(int n)
{
    if(n==1)return 0;
    int i;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i ==0)
            return 0;
    }
    return 1;
}

int main()
{
	int n,a;
	scanf("%d",&n);
	while(1)
	{
		n++;
		if(isPrime(n))
		{
			printf("%d",n);
			break;
		}
		else
			continue;
	}
	return 0;
}