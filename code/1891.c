#include<stdio.h>
#include<math.h>
int isPrime(int number); 

int main()
{
	int n;
	
	scanf("%d",&n);
	
	do{
		n++;
	}while(isPrime(n)!=1);
	
	printf("%d",n);

	return 0;
}



int isPrime(int number)
{
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}