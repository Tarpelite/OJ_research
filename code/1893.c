#include <stdio.h>
int isprime(int n)
{
    if(n==1)       return 0;
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
	int n, i, x=0;
	scanf("%d", &n);
	for(i=0; x==0; i++){
		n=n+1;
		x=isprime(n);
	}
	printf("%d", n);
	return 0;
}